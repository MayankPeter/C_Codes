//pirnt address to check where extra bytes are allocated
#include<stdio.h>
//#pragma pack(1)
struct st
{
int i;
float f;
char ch;// try to keep same data type together while declaring structure
};

void main()
{
struct st s1;
printf("%u %u %u\n",&s1.i, &s1.ch, &s1.f); //for char also 4 bytes are allocated
}
