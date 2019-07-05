#include<stdio.h>
void main(int argc,char *argv[])
{
	FILE *fp;
	int c;
	char ch;
	if(argc!=3)
	{
		printf("Usage: ./a.out file_name char\n");
		return;
	}

	fp = fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}

	c=0;
	while((ch=fgetc(fp))!=-1)
		if(ch==argv[2][0])
			c++;

	printf("%c occured %d times\n",argv[2][0],c);
}
