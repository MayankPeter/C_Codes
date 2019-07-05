//after using pointer make it point to 0 address ,such pointers are called  null pointers.
#include<stdio.h>
void main()
{
int i=10;
int *p =0;

p=&i;

*p = 20;

printf("%u i=%u\n",*p,i);

p=0;


}
