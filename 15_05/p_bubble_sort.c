#include<stdio.h>
void main()
{
int ele,a[5],i,j,tmp;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d", &a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);

printf("\n");

for(i=0;i<ele-1;i++)
{
for(j=0;j<(ele-1)-i;j++)
{
if(a[j]>a[j+1])
{
tmp = a[j];
a[j] = a[j+1];
a[j+1] = tmp;
}

}

}

for(i=0;i<ele;i++)
printf("%d ",a[i]);

printf("\n");

}
