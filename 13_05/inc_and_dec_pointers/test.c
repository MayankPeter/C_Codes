#include<stdio.h>
void main()
{
int i =10;
int *p=&i;

printf("p=%u *p=%u\n",p,*p);

(*p)++;

printf("p=%u *p=%u\n",p,*p);

}
