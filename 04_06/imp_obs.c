#include<stdio.h>
void main()
{
int a[10] = {10,20,30,40,50,60,70,80,90,100};
int (*p)[3];
int (*q)[2];

p = a+3;
q = a+2;

printf("%d %d\n", *(*(p+1)+1), *(*(q+2)+1) );


printf("%d %d\n", p[1][1], q[2][1] );
}

