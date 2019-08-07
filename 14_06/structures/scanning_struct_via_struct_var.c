#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};
void main()
{
struct st a1;

printf("enter integer value\n");
scanf(" %d",&a1.i);

printf("enter char value\n");
scanf(" %c",&a1.ch);

printf("enter float value\n");
scanf(" %f",&a1.f);

printf("output\n");
printf("%d %c %f\n",a1.i, a1.ch, a1.f);

}
