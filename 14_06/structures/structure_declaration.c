//structure declaration cannot have storage type

#include<stdio.h>
struct st
{
static int i; // error
char ch;
float f;
};
void main()
{
static struct st a1; // not an error 


}
