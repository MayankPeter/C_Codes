#include<stdio.h>
void main(int argc,char *argv[])
{
FILE *fp;
char ch;
int c=0;
if(argc!=2)
{
printf("Usage: ./a.out file_name\n");
return;
}

fp = fopen(argv[1],"r");
if(fp==0)
{
printf("File not found\n");
return;
}

while((ch=fgetc(fp))!=-1)
c++;

printf("size = %d\n",c);
}
