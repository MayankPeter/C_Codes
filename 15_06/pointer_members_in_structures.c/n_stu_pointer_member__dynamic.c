//doubt

#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char *name;
float marks;
};
void main()
{
struct st **p;
int n,i;

printf("Enter the number of students\n");
scanf(" %d",&n);

p = malloc(sizeof(struct st *)*n);
*p->name=malloc((sizeof(char)*10));

for(i=0;i<n;i++)
p[i] = malloc(sizeof(struct st));

for(i=0;i<n;i++)
{
printf("Enter rollno, name and marks\n");
scanf(" %d%s%f",&p[i]->rollno, p[i]->name, &p[i]->marks);
}

for(i=0;i<n;i++)
printf("%d %s %f\n",p[i]->rollno, p[i]->name, p[i]->marks);


}
