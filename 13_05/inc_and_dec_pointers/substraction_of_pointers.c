//substraction of pointers gives the total number of values that can be stored between those addresses

#include<stdio.h>
void main()
{
int *p,*q;
char *r,*s;

p=1000;
q=1016;

r=1000;
s=1016;

printf("no of integers that can be stored is :%d\n",q-p);
printf("no of characters that can be stored is :%d\n",s-r);


}
