#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Usage: ./a.out <sfile> <destfile>\n");
		return;
	}

	FILE *fp = fopen(argv[1],"r");
	if(fp==0)
	{
		printf("Unable to read source file\n");
		return;
	}

	FILE *fd = fopen(argv[2],"w+");
	int r=0,i,j,c=0,c1=0,c2=0;
	char **p,*t,ch;

	while((ch=fgetc(fp))!=-1)
	{
		c1++;
		if(ch=='\n')


		{
			r++;
			if(c1>c)
			{
				c = c1;
				//printf("c=%d\n",c);
			}
			c1=0;
		}
	}
	char s[c]; //for printing content of destionation file at last
	rewind(fp);
	/////////////////////////////////////////////
	p = malloc(sizeof(char *)*r);

	for(i=0;i<r;i++)
		p[i] = malloc(sizeof(char)*c);
	////////////////////////////////////////////
	/*i=0;
	  while(fgets(p[i],c,fp))
	  {
	//printf("%s",p[i]);
	i++;
	}*/
	for(i=0;i<r;i++)
	{
		fgets(p[i],c,fp);
		//printf("%s",p[i]);
	}

	///////////////////////////////////////////
	for(i=0;i<r-1;i++)
		for(j=0;j<r-1-i;j++)
			if(strlen(p[j])>strlen(p[j+1]))
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
	///////////////////////////////////////////
	for(i=0;i<r-1;i++)
	{
		//printf("%s",p[i]);
		fputs(p[i],fd);
	}
	//////////////////////////////////////////
	printf("Content of %s:\n",argv[2]);

	while(fgets(s,c,fd))
		printf("%s",s);
}
