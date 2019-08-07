#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
FILE *fp;
char s[50];
if(argc!=3)
{
printf("Usage: ./a.out <string> <filename>\n");
return;
}

if((fp=fopen(argv[2],"r"))==0)
{
printf("File not found\n");
return;
}

while(fgets(s,50,fp)!=0)
{
if(strstr(s,argv[1]))
printf("%s\n",s);
}
}
