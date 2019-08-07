#include<stdio.h>
void main()
{
FILE *fs;
fs = fopen("data","r");

if(fs==0)
{
printf("File not found\n");
return;
}

printf("file exist\n");
}
