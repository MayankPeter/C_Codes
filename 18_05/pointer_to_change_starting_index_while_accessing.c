#include<stdio.h>
void main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int *p;

p = a+3;

printf("value accessed is %d %d\n",p[3],3[p]);//p[3] = *(p+3)

}
