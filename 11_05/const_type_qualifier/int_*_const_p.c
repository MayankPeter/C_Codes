#include<stdio.h>
void main()
{
int i = 10,j=20;
int * const p = &i;

*p = 30;//No Error

p = &j;//Error
}
