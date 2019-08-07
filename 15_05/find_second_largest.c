#include<stdio.h>
void main()
{
int ele,l,sl,a[5],i;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else
{
sl=a[0];
l=a[1];
}


for(i=2;i<ele;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(sl<a[i])
{
sl=a[i];
}
}
printf("Largest is %d & Second largest is %d\n",l,sl);
}
