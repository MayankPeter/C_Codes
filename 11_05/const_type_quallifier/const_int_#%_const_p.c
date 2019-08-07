#include<stdio.h>
void main()
{
int i = 10, j = 20;
const int * const p = &i;

p=&j;

*p = 30;

}
