#include<stdio.h>
void main()
{
int index2,index,least,l,i,ele,a[5];

ele = sizeof(a)/sizeof(a[0]);

printf("Enter the numbers\n");

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

l=a[0];
least=a[0];
index=0;
index2=0;
for(i=1;i<ele;i++)
{
if(a[i]>l)
{
l=a[i];
index=i;
}
if(a[i]<least)
{
least=a[i];
index2=i;
}
}

printf("largest value is %d at index %d\n",l,index);
printf("least value is %d at index %d\n",least,index2);

}
