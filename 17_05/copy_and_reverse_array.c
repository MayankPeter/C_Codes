#include<stdio.h>
void main()
{
int ele,a[5],b[5],i,j;

ele = sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d",a+i);

for(i=0;i<ele;i++)
printf("%d ",*(a+i));
printf("\n");


for(i=ele-1,j=0;i>=0;i--,j++)
b[i] = a[j];

for(i=0;i<ele;i++)
printf("%d ",b[i]);

printf("\n");

}
