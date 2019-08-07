#include<stdio.h>
void main()
{
int i=10;
const int *p;
int *q;

p=q=&i;

//*p = 20;//error
*q = 20;

printf("i=%d\n",i);

}
