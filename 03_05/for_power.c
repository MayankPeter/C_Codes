#include<stdio.h>
int power(int,int);

void main()
{
	int num,pow,result;

	printf("Enter the number\n");
	scanf("%d",&num);

	printf("Enter the power\n");
	scanf("%d",&pow);

	result = power(num,pow);
	
	printf("number is %d\n",result);

}

int power(int num, int pow)
{
	int i;
	for(i=1;pow>0;pow--)
	{

		i = i * num;

	}

	return i;

}
