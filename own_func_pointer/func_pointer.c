#include<stdio.h>
int func(int);
void main()
{
int (* fptr)(int);
fptr = func;
fptr(5);
printf("%d %u\n",sizeof(func),&func);
}

int func(int n)
{
printf("%d\n",n);
}

