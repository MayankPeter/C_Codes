#include<stdio.h>
void main()
{
int i;
char s[20];

printf("Enter the string\n");
scanf(" %[^\n]",s);

for(i=0;s[i];i++);

for(i=i-1;i>=0;i--)
{
printf("%c",s[i]);
}

printf("\n");
}
