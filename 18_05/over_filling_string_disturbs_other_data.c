#include<stdio.h>
void main()
{
char s1[5],s2[5];

printf("s1=%u  s2=%u\n",s1,s2);

printf("Enter s2\n");
scanf("%s",s2);

printf("before s2 = %s\n",s2);

printf("Enter s1\n");

scanf(" %s",s1);

printf("after s2 = %s\n",s2);


}
