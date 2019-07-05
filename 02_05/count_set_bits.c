#include<stdio.h>
void main()
{
	int i,count=0,pos=0;
	printf("Enter the number\n");
	scanf("%d",&i);

L1:
	if(i&1<<pos)

		count++;
	pos++;


	if(pos<=31)
		goto L1;

	printf("count is %d\n",count);

	if(count==1)
		printf("And is power of 2\n");
	else 
		printf("And is not a power of two\n");

}
