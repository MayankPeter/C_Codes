#include<stdio.h>
void main()
{
int i=10;
int *p = i;//int *p = &i thus generates warning
*p = 20;


}
