#include<stdio.h>
void main()
{
int i=10, j=20;
int *p = &i;
*p = &j;//here we stored address of j to be stored at i
	//correct way is p = &j coz we wanted to store 50 in j
printf("%u %u\n",i,&j);
*p = 50;

printf("i is now %d\n",i);

}
