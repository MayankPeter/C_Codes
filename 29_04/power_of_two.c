#include<stdio.h>
void main()
{

int r, i;
printf("Enter the number\n");
scanf("%d",&i);
//i&i-1?printf("Not power of two\n"):printf("Power of two\n");
r=i&i-1?printf("Not power of two\n"):printf("Power of two\n");
printf("r is %d\n",r);

}
