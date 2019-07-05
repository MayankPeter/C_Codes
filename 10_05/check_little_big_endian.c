#include<stdio.h>
void main()
{
int i=1;
char *cp;

cp=(char *)&i;

if(*cp)
printf("Little Enidian\n");
else
printf("Big Enidian");
}

