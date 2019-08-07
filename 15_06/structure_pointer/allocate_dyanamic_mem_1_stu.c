#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[20];
float marks;
};
void main()
{
struct st *p;
p = malloc(sizeof(struct st));

printf("Enter rollno ,name and marks\n");
scanf(" %d%s%f",&p->rollno,p->name,&p->marks);

printf("%d %s %f\n",p->rollno,p->name,p->marks);

}
