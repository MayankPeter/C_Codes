#include<stdio.h>
void main()
{

int num,bin,pos;
printf("Enter the number\n");
scanf("%d",&num);
pos = sizeof(int)*8-1;

for(;pos>=0;pos--)
	{
		bin = num>>pos&1;
		printf("%d",bin);
	}

printf("\n");




}
