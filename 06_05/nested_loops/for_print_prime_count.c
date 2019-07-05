#include<stdio.h>
void main()
{
int num,c,count,i;
printf("Enter the lower range\n");
scanf("%d",&num);
printf("Enter the count to print\n");
scanf("%d",&count);


for(c=0;c<count;num++)

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
