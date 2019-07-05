#include<stdio.h>
#include<string.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	FILE *fp = fopen("data","r");
	struct st a1[5],a2[5],t;
	int i,j,n;
	FILE *fd = fopen("data1","w+");

	for(i=0;i<5;i++)
		fscanf(fp,"%d%s%f",&a1[i].rollno, a1[i].name, &a1[i].marks);
	
	////////////////////////////////////////////////////////////////////
	/*sorting options*/
	printf("sorting options:\n1) Roll numberwise\n2) Namewise\n3) Markswise\n");
	scanf(" %d",&n);

	if(n==1)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4-i;j++)
			{
				if(a1[j].rollno > a1[j+1].rollno)
				{
					t = a1[j];
					a1[j] = a1[j+1];
					a1[j+1] = t;
				}
			}
		}
	}

	if(n==2)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4-i;j++)
			{
				if(strcmp(a1[j].name,a1[j+1].name)>0)
				{
					t = a1[j];
					a1[j] = a1[j+1];
					a1[j+1] = t;
				}
			}
		}
	}

	if(n==3)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4-i;j++)
			{
				if(a1[j].marks > a1[j+1].marks)
				{
					t = a1[j];
					a1[j] = a1[j+1];
					a1[j+1] = t;
				}
			}
		}
	}

	///////////////////////////////////////////////////////////////////
	for(i=0;i<5;i++)
		fprintf(fd,"%d %s %f ",a1[i].rollno, a1[i].name, a1[i].marks);

	rewind(fd);

	for(i=0;i<5;i++)
		fscanf(fd,"%d%s%f",&a2[i].rollno, a2[i].name, &a2[i].marks);

	for(i=0;i<5;i++)
		{
			printf("%d %s %f\n",a2[i].rollno, a2[i].name, a2[i].marks);
			
		}
}
