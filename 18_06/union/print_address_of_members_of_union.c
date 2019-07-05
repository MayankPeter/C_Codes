//all members share same address and size is highest member size
#include<stdio.h>
union U
{
char ch;
int i;
float f;
};
void main()
{
union U u1;
printf("%ld %ld %ld\n",&u1.ch, &u1.i, &u1.f);
}
