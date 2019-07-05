#include<stdio.h>
void main()
{
float f =23.5;
char *p;
int i,j;

p=&f;
p=p+3;

for(j=3;j>=0;j--)
{
for(i=7;i>=0;i--)
{
printf("%d",*p>>i&1);

}
p=p-1;
printf(" ");

}

printf("\n");
}
