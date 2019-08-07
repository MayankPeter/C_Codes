#include<stdio.h>
struct st
{
int rollno;
char name[20];
float marks;
};
void main()
{
struct st a1 = {10,"mayank",99.999};
struct st *p;
p = &a1;

printf("%d %s %f\n",p->rollno,p->name,p->marks);

}
