#include<stdio.h>
int power(int, int);

void main()
{

	int rem,num,count,num1,result,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	num1=num;

	for(count=0;num1;num1=num1/10)
		count++;


	for(num1=num;num1;num1=num1/10)
	{
		rem = num1%10;
		sum = sum + power(rem,count);

	}

	if(sum==num)
		printf("Armstrong number\n");
	else
		printf("Not Armstrong\n");
}

int power(int num,int pow)
{
	int power1;

	for(power1=1;pow>0;pow--)
	{
		power1 = power1 * num;

	}

	return power1;
}
