#include<stdio.h>
void main()
{
const int *p;
int i=10;

p=&i;//this line doesn't give error

*p = 20;//this line gives error


}
