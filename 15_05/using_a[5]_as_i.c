#include<stdio.h>
void main()
{
int j,i=100,a[5];

for(j=0;j<5;j++)
printf("%u ",&a[j]);

printf("\naddress of i = %u ",&i);

a[-2]=500;

printf("i=%d \n",i);
}
