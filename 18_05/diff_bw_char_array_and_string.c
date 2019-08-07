//string size is one more than char array because it has an extra character called '/0' in the end

#include<stdio.h>
void main()
{

char ch[] = {'a','b','c','d','e'};
char s[] = "abcde";

printf("ch=%d  s=%d\n",sizeof(ch),sizeof(s));

}
