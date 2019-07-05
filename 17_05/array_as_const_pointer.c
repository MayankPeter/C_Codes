//array name is treated as constant pointer
//a[i]==i[a]==*(a+i)

#include<stdio.h>
void main()
{
int i,a[5]={10,20,30,40,50};

//i=a+1; //this line gives error since array is constant pointer
printf("a=%d a+1=%d \n",a,a+1);

for(i=0;i<5;i++)
printf("%d %d %d %d\n",a[i],i[a],*(a+i),*(i+a));


}

