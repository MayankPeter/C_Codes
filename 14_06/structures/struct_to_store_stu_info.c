#include<stdio.h>
struct st
{
int rollno;
char ch[15];
float marks;
};
void main()
{
struct st s1;

printf("Enter the rollno\n");
scanf(" %d",&s1.rollno);

printf("Enter the name\n");
scanf(" %s",s1.ch);

printf("Enter the marks\n");
scanf(" %f",&s1.marks);

printf("%d %s %f\n",s1.rollno,s1.ch,s1.marks);
}
