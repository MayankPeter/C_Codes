#include<stdio.h>
void main()
{

int i,j=1;
printf("Enter the number\n");
scanf("%d",&i);

L1:
printf("%d * %d = %d\n",i,j,i*j);
j++;
if(j<=10)
{
goto L1;
}





}
