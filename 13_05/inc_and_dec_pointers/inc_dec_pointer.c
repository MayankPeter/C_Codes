//integer pointer increments address by 4
//character pointer increments address by 1

#include<stdio.h>
void main()
{
int i=258;
int *p;
char *c;

p=c=&i;
printf("&i=%u\n",&i);


printf("p=%u c=%u\n",p+1,c+2);
//////////////////////////////////////////////
/*binary of 258

00000000|00000000|00000001|00000010
                    c+1

|_____________ p _________________|

*/
//obsreve

printf("*(c+1)=%d \n",*(c+1));

printf("*(p+1)=%d\n",*(p+1)); //garbage is given 

}
