#include<stdio.h>
void main()
{

	int num,i,count;
	printf("Enter the number\n");
	scanf("%d",&num);

	if(num!=2)
	{
		for(i=2,count=0;i<num;i++)
		{
			if(num%i)
				count++;
		}

		if(count)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
	}	
	else
		printf("2 is a prime number\n");
}
