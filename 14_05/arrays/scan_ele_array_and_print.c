#include<stdio.h>
void main()
{
int i,ele,a[5];

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);

}
