#include<stdio.h>
void main()
{


//int a[]; //error array size not available
int b[5]; //array size is 5*4= 20;
int c[]={1,2,3,4,5,6}; //array size is based on number of ele i.e. 6*4= 24
int d[10]={1,2,3,4,5};//size depends on size within sq. brackets

printf("a=%d b=%d c=%d d=%d\n",sizeof(b),sizeof(c),sizeof(d));

}
