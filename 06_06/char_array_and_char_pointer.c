//size of s = 50 bytes
//size of p = 12 bytes

#include<stdio.h>
void main()
{
int i;
char s[][10]={"abcd","efgh","ijkl"}; //total memory 30 bytes
char *p[] = {"ABCD","EFGH","IJKL"}; //total memory 4+4+4+5+5+5 = 19bytes (in read only memory)

//printf("size of p = %d %d %d\n",sizeof(p[0]), sizeof(p[1]), sizeof(p[2]) );

for(i=0;i<3;i++)
printf("s=%s p=%s\n",s[i],p[i]);

}
