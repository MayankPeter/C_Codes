//using pointer to an array

#include<stdio.h>
void print_2d(int (*)[3],int, int);
void main()
{
int b[2][3] = {{10,20,30},{40,50,60}};
print_2d(b,2,3);

printf("\n");
}

void print_2d(int (*p)[3],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
for(j=0;j<c;j++)
printf("%d ",p[i][j]);
}
