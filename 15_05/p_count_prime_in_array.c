#include<stdio.h>
void main()
{
int j,i,a[10],ele,count=0;

ele=sizeof(a)/sizeof(a[0]);

printf("Enter the numbers\n");

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele;i++)
{
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(j==a[i])
{
count++;
printf("%d ",j);
}
}
printf("\ncount=%d\n",count);
printf("\n");

}
