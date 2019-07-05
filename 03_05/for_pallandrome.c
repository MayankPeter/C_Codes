#include<stdio.h>
void main()
{

int num,num1,rem,rev;
printf("Enter the number\n");
scanf("%d",&num);

num1=num;

for(rev=0;num1;num1=num1/10)
{
	rem=num1%10;
	rev = rev*10+rem;
}
printf("reverse is %d\n",rev);

if(rev==num)
	printf("%d is a pallandrome\n",num);
else
	printf("%d is not a pallandrome\n",num);




}
