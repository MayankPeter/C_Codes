#include<stdio.h>
void main()
{

int num,pos;
printf("Enter the number\n");
scanf("%d",&num);

for(pos=sizeof(int)*8-1;pos>=0;printf("%d",num>>pos&1),pos--);


printf("\n");





}
