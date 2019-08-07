#include<stdio.h>
void main()
{
	int num,i=31;
	printf("Enter the number\n");
	scanf("%d",&num);

	while(i>=0)
	{
		printf("%d",num>>i&1);
		i--;
	}
	printf("\n");
}
