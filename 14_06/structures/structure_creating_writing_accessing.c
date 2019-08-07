#include<stdio.h>
struct st
{
int i;
char ch;
float f;
}; // }a1; global varable

void main()
{
struct st a1 = {5,'a',23.5};
printf("%d %c %f\n",a1.i,a1.ch,a1.f);

//a1 = {10,'b',30.0}; //error
//printf("%d %c %f\n",a1.i,a1.ch,a1.f);

a1.i = 15;
a1.ch = 'c';
a1.f = 35.0;
printf("%d %c %f\n",a1.i,a1.ch,a1.f);

}
