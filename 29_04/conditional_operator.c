#include<stdio.h>
void main()
{

int i=10,j=200,k;
k = i>j?100:200;
printf("k is %d\n",k);

k = i<j?100:200;
printf("k is %d\n",k);

//i>j?k=100:k=200;// uncomment and see
//printf("k is %d\n",k);

i>j?k=100:(k=200);
printf("k is %d\n",k);



}
