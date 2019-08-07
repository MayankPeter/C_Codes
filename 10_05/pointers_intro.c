#include<stdio.h>
void main()
{
int i=10,j=20,k=30;
int *ip;

printf("%d %d %d\n",i,j,k);

ip=&i;

//*ip=j;

j=*ip;

printf("%d %d %d\n",i,j,k);

}
