#include<stdio.h>
void main()
{
int i,j,k;
char s[10],ch;

printf("Enter the string\n");
scanf(" %[^\n]",s);

for(k=0;s[k];k++);

for(j=0,i=k-1;i>j;j++,i--)
{
ch = s[j];
s[j] = s[i];
s[i] = ch;
}

s[k] = '\0';

for(i=0;s[i];i++)
printf("%c",s[i]);

printf("\n");
}
