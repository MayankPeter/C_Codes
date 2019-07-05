#include<stdio.h>
void main(int argc,char *argv[])
{
int i;
char ch;
if(argc<3)
{
printf("Usage: ./a.out source d1 d2...\n");
return;
}
////////////////////////////////////////////////////
FILE *fp,*fd;
fp = fopen(argv[1],"r");
if(fp==NULL)
{
printf("Source File not found..exiting..\n");
return;
}
////////////////////////////////////////////////////
for(i=2;i<argc;i++)
{
fd = fopen(argv[i],"w");
while((ch=fgetc(fp))!=EOF)
fputc(ch,fd);
rewind(fp);
}
///////////////////////////////////////////////////
}
