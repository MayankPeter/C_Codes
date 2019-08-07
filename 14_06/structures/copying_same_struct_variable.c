#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};

void main()
{
struct st a1={10,'a',23.5}, a2;
a2 = a1;
printf("%d %c %f\n",a2.i, a2.ch, a2.f);
}

