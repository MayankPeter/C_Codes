#include<stdio.h>
void main()
{

int num,i,count;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1,count=0;i<=num;i++)
{
if(num%i==0)
	count++;
}

if(count==2)
	printf("%d is a prime number\n",num);
else
	printf("%d is not a prime number\n",num);



}
