#include<stdio.h>
void main()
{

int i,pos;
printf("Enter a number\n");
scanf("%d",&i);

pos = sizeof(int)*8-1;

L1:
printf("%d",i>>pos&1);
pos--;
if(pos>=0)
	goto L1;




}
