#include<stdio.h>
int sum(int,int);
int diff(int,int);
void main()
{
int (* fptr)(int ,int );
int ans,n;
printf("1) Sum\n2) Diff\n");
scanf("%d",&n);

if(n==1)
fptr = sum;
else
fptr = diff;

ans = fptr(10,5);
printf("%d\n",ans);
}

int sum(int a,int b)
{
printf("Sum is:\n");
return a+b;
}

int diff(int a,int b)
{
printf("Diff is:\n");
return a-b;
}
