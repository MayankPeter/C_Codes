/*same as const int *p */
#include<stdio.h>
void main()
{
int i = 10;
int const *p;

p = &i;//this does not give error

*p = 20;//this throws error


}
