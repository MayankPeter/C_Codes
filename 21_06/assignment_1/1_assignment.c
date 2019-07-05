#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	FILE *fp = fopen("data","w+");
	struct st a1[5],a2[5];
	int i;

	for(i=0;i<5;i++)
	{
		printf("%d) Enter the rollno, name & marks: \n",i+1);
		scanf(" %d%s%f",&a1[i].rollno, a1[i].name, &a1[i].marks);
		fprintf(fp,"%d %s %f ",a1[i].rollno, a1[i].name, a1[i].marks);
	}

	rewind(fp);
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%d%s%f",&a2[i].rollno, a2[i].name, &a2[i].marks);
		printf("%d %s %f ",a2[i].rollno, a2[i].name, a2[i].marks);
	}
}
