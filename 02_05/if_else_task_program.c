#include<stdio.h>
void main()
{

	int num,pos,op,count_bit=0,count_opt=0;
	printf("Enter the number\n");
	scanf("%d",&num);

L1:
	printf("Enter the bit position (0-31)\n");
	scanf("%d",&pos);

	if(pos>=0 && pos<=31)
	{
	   L2:
		printf("Select an option:\n1)Set\n2)Clear\n3)Complement\n");
		scanf("%d",&op);

		if(op==1)
		{
			num = num|1<<pos;
			printf("num=%d\n",num);
		}

		else if(op==2)
		{
			num = num&~(1<<pos);
			printf("num=%d\n",num);
		}

		else if(op==3)
		{
			num = num^1<<pos;
			printf("num=%d\n",num);
		}

		else
		{	if(count_opt<3)	
			{
				count_opt++;
				printf("Invalid option\n");
				goto L2;
			}
		}
	}

	else
	{
		count_bit++;
		printf("Invalid position\n");
		if(count_bit<3)
		{	if(count_bit==2)
				printf("This is your last attempt\n");
		goto L1;
		}
	}

}
