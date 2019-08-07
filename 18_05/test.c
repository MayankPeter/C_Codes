#include<stdio.h>
main()
{
char ch[]={'a','b','c','d','\0','e','f'};
int i;
printf("%d\n",ch);

for(i=0;ch[i];i++)
printf("%c ",*(ch+i));


}
