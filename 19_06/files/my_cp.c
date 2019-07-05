#include<stdio.h>
void main(int argc,char *argv[])
{
int n;

if(argc!=3)
{
printf("Usage: my_cp source_file destination_file\n");
return;
}

FILE *fp,*fd;
char s[10];
char ch;

fp = fopen(argv[1],"r");

if(fp==0)
{
printf("file not found\n");
return;
}

fd = fopen(argv[2],"r");
if(fd==0)
{
fd = fopen(argv[2],"w");
}
else
{
printf("file exist\nDo you want to:\n1) Truncate\n2) Leave as it is\n");
scanf(" %d",&n);

if(n==1)
fd = fopen(argv[2],"w");
else
return;
}

while((ch=fgetc(fp))!= EOF)//or!=-1
fputc(ch,fd);
}
