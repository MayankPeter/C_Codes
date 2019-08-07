#include<stdio.h>
void main()
{
int i = 30;
int *p;//Wild Pointer
printf("%d \n",*p);

*p = &i;//this line tries to store address of i at garbage location
        // correct way is p = &i
printf("%d\n",*p);

*p=20;

printf("%d \n",*p);

}
