#include<stdio.h>
void main()
{

int num,i=1;
printf("Enter the number\n");
scanf("%d",&num);

while(i<11)
{
 printf("%d * %d = %d\n",num,i,num*i);
 i++;
}
printf("****End****\n");


}
