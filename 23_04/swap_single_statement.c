#include<stdio.h>
void main()
{

	int i,j,tmp;
	printf("Enter two numbers to swap\n");
	scanf(" %d" " %d",&i,&j);
	printf("i = %d and j = %d\n",i,j);
	i = i + j - (j=i);
	printf("After swap i = %d and j = %d\n",i,j);




}
