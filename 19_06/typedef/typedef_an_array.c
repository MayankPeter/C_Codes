#include<stdio.h>
typedef int ARR[5];
typedef char str[20];
void main()
{
ARR a1;
a1[0] = 10;
printf("a1[0] = %d\n",a1[0]);

str s;
scanf("%s",s);
printf("%s\n",s);
}
