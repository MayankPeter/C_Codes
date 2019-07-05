#include<stdio.h>
void main()
{

char ch;
printf("Enter a character\n");
scanf("%c",&ch);
//ch |=32; //upper to lower and lower to lower itself
//ch &= ~32; //lower to upper and upper to upper itself
ch ^= 32;
printf("%c\n",ch);



}
