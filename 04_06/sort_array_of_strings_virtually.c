 #include<stdio.h>
#include<string.h>
void main()
{
char s[5][10];
char *p[5], *t;
int ele,i,j;

ele = sizeof(s)/sizeof(s[0]);

for(i=0;i<ele;i++)
p[i] = s[i];

printf("Enter 5 strings\n");
for(i=0;i<ele;i++)
scanf(" %s",p[i]);

printf("Before Array----------\n");
for(i=0;i<ele;i++)
printf("%s\n",s[i]);//by array

printf("Before Pointer----------\n");
for(i=0;i<ele;i++)
printf("%s\n",p[i]);//by pointer


for(i=0;i<ele-1;i++)
{
for(j=0;j<ele-1-i;j++)
{
if(strcmp(p[j],p[j+1])>0)
{
t = p[j];
p[j] = p[j+1];
p[j+1] = t;
}
}
}

printf("After array----------\n");
for(i=0;i<ele;i++)
printf("%s\n",s[i]);//by array

printf("sorted pointer---------\n");

for(i=0;i<ele;i++)
printf("%s\n",p[i]);//by pointer
}
