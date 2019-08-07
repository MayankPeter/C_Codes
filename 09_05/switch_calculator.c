#include<stdio.h>
void main()
{
int n1,n2;
char ch;
printf("Enter two numbers\n");
scanf("%d %d",&n1,&n2);
printf("Enter the operation symbol to perform\n");
scanf(" %c",&ch);

switch(ch)
{
case '+':printf("%d\n",n1+n2);
	break;
case '-':printf("%d\n",n1-n2);
	break;
case '*':printf("%d\n",n1*n2);
	break;
case '/':printf("%d\n",n1/n2);
	break;

default: printf("/invalid operation\n");
}

}
