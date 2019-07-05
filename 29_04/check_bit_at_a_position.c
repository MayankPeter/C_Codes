#include<stdio.h>
void main()
{

int i ,j;
printf("Enter the number\n");
scanf("%d",&i);
printf("Enter the bit position\n");
scanf("%d",&j);
i&1<<j?printf("set\n"):printf("clear\n");
i>>j&1?printf("set\n"):printf("clear\n");

}
