#include<stdio.h>
void main()
{
int i=258;
char *cp = &i;

/*
before binary of 258: 00000000 00000000 00000001 00000010
*/                                               |______|
                                                   *cp

printf("Before %d \n",*cp);// it focuses on just first byte of 258

*cp = *cp+1;

/*
after binary : 00000000 00000000 00000001 00000001
*/

printf("After %d \n",*cp);

}
