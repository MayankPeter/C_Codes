#include<stdio.h>
void main()
{

	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);

	for(i=2;i<num;i++)
		if(num%i==0)
			break;

	if(i==num)
		printf("Prime\n");
	else
		printf("Not Prime\n");
}
