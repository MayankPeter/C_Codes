#include<stdio.h>
void main()
{
int i, *q;
printf("%u \n",*q);

*q = &i;

printf("%d \n",*q);

printf("Address of i is %u and value at p is %u \n",&i,q);


}
