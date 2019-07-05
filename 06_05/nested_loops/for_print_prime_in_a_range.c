#include<stdio.h>
void main()
{
int num,end,i;
printf("Enter the lower range\n");
scanf("%d",&num);
printf("Enter the upper range\n");
scanf("%d",&end);


for(;num<=end;num++)

{	
	for(i=2;i<num;i++)
	if(num%i==0)
	break;

if(num==i && num<=end)
printf("%d ",num);




}
printf("\n");

}
