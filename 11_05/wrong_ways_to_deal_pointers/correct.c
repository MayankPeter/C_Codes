#include<stdio.h>
void main()
{
int i=10,j=20;
int *p = &i;

*p = j;

printf("i=%d j=%d\n",i,j);


}
