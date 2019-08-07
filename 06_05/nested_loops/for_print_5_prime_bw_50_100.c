#include<stdio.h>
void main()
{
int num,i,c;
for(num=50,c=0;c<5;num++ )
{
	for(i=2;i<num;i++)
	if(num%i==0)
		break;

if(num==i)
{
	printf("%d ",num);
	c++;	
}

}

printf("\n");

}
