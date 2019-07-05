#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};
void main()
{
struct st a1 = {.ch='a'};
printf("%d %c %f\n",a1.i,a1.ch,a1.f);
}
