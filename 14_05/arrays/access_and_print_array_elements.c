#include<stdio.h>
void main()
{
int ele,i,a[]={1,2,3,4,5};

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);

}
