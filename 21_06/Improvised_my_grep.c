#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
FILE *fp;
char ch;
int c=0,c1=0;
if(argc!=3)
{
printf("Usage: ./my_grep <string> <filename>\n");
return;
}
/////////////////////////////////////////////////////////
if((fp=fopen(argv[2],"r"))==0)
{
printf("File not found\n");
return;
}
/////////////////////////////////////////////////////////
while((ch=fgetc(fp))!=-1)
{
c++;
if(ch=='\n')
{
if(c>c1)
c1 = c;

c = 0;
}
//printf("c1=%d\n",c1);
}
rewind(fp);
/////////////////////////////////////////////////////////
char s[c1];
printf("\n");
while(fgets(s,c1,fp)!=0)
{
if(strstr(s,argv[1])!=0)
printf("%s\n",s);
}
}
