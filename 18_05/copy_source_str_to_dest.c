#include<stdio.h>
void main()
{
int i;
char s[10], d[10];

printf("Enter the source string\n");
scanf("%s",s);

for(i=0;s[i];i++)
d[i] = s[i];

d[i] = '\0';

printf("%s",d);

printf("\n");

}
