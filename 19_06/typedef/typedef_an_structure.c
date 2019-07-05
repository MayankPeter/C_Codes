#include<stdio.h>
/*  
typedef struct st //way 1
{
int i;
char ch;
}S;
*/
struct st
{
int i;
char ch;
};
typedef struct st S;  // way 2

void main()
{
S a1;
a1.i =10;
a1.ch = 'a';
printf("%d %c\n",a1.i,a1.ch);
}
