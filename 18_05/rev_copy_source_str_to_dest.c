#include<stdio.h>
void main()
{
char s[10],d[10];
int i,j;

printf("Enter the source string: \n");
scanf("%[^\n]",s);

for(i=0;s[i];i++);

for(i=i-1,j=0;s[i];i--,j++)
{
d[i] = s[j];
}

d[j] = '\0';


printf("%s\n",d);

}
