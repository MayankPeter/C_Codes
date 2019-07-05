#include<stdio.h>
void main()
{
int i,ele,a[5];

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=ele-1;i>=0;i--)
printf("%d ",a[i]);

}
