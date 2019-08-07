#include<stdio.h>
void main()
{
int num,sum=0,r;
printf("Enter the number\n");
scanf("%d",&num);

while(num)
{
r = num%10;
sum = sum + r;
num /= 10;
}

printf("sum is %d\n",sum);




}
