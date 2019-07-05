#include<stdio.h>
void main()
{
int a[5] = {10,20,30,40,50};
int (*p)[5], *ip;

ip=a;
p=a;

printf("ip=%u *ip=%u \n",ip,*ip);

printf("p=%u *p=%u **p=%u\n",p,*p,**p);

printf("%d %d %d\n",(*p)[0],*(*(p)+1),(*p)[2]);

}

