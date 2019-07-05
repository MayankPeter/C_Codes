#include<stdio.h>
void main()
{

int num,rem,sum;
printf("Enter the number\n");
for(scanf("%d",&num),sum=0;rem=num%10,num;sum=sum*10+rem,num=num/10);


//for(scanf("%d",&num),sum=0;sum=sum+rem,num;rem=num%10,num=num/10); //since in sum=sum+rem is executed with rem havin garbage value
printf("reverse is %d\n",sum);

}
