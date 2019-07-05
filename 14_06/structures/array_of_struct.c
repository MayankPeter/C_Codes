#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
void main()
{
	struct st a1[5];
	int i,ele;

	ele = sizeof(a1)/sizeof(a1[0]);

	for(i=0;i<ele;i++)
	{
		printf("Enter the rollno\n");
		scanf(" %d",&a1[i].rollno);

		printf("Enter the name\n");
		scanf(" %s",a1[i].name);

		printf("Enter the marks\n");
		scanf(" %f",&a1[i].marks);
	}

	for(i=0;i<ele;i++)
		printf("%d %s %f\n",a1[i].rollno, a1[i].name, a1[i].marks);
}
