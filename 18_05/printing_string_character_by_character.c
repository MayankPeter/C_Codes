#include<stdio.h>
void main()
{
char s[10];
int i;

printf("Enter the string\n");
scanf(" %s",s);


for(i=0;s[i];i++)//since '\0' is 1 byte all zeroes
{
printf("%c",*(s+i));

}

printf("\nLength of the string is %d\n",i);

}
