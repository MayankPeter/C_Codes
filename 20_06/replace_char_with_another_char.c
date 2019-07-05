#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
FILE *fp;
char *p,ch;
int i,c=0;
if(argc!=4)
{
printf("Usage: ./a.out filename a\n");
return;
}
///////////////////////////////////
if((fp=fopen(argv[1],"r+"))==0)
{
printf("file not found\n");
return;
}
///////////////////////////////////
while((ch=fgetc(fp))!=-1)
c++;
rewind(fp);
//////////////////////////////////
p = malloc(c+1);
i=0;
while((ch=fgetc(fp))!=-1)
p[i++] = ch;
p[i] = '\0';
rewind(fp);
////////////////////////////////
for(i=0;p[i];i++)
if(p[i]==argv[2][0])
p[i] = argv[3][0];
///////////////////////////////
for(i=0;p[i];i++)
fputc(p[i],fp);
}
