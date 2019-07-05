#include<stdio.h>
void main()
{
unsigned char ch=0xEB;
printf("%x\n",ch);
ch = ch>>4|ch<<4;
printf("%x\n",ch);

}
