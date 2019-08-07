#include<stdio.h>
void main()
{
int tmp,ele,a[5],i,j;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele-1;i++)
{
for(j=i+1;j<ele;j++)
{
if(a[i]>a[j])
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}

}

}
for(i=0;i<ele;i++)
printf("%d ",a[i]);

printf("\n");
}
