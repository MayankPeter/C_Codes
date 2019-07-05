#include<stdio.h>
struct st
{
int i;
char ch;
float f;
};

void main()
{
struct st s1;
printf("%ld %ld %ld\n", sizeof(s1.i),sizeof(s1.ch), sizeof(s1.f));
printf("%ld\n",sizeof(s1));
}
