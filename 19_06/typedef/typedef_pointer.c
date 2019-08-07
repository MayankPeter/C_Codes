#include<stdio.h>
typedef int * IPTR;
void main()
{
int i = 10;
IPTR p, *q;
p = &i;
printf("%d\n",*p);
}
