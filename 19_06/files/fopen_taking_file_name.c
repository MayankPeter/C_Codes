#include<stdio.h>
void main(int argc,char *argv[]) //loadtime filename
{
if(argc!=2)
{
printf("Usage: ./a.out filename\n");
return;
}

FILE *fp;

char s[10];
printf("Enter filename\n");
scanf("%s",s); 			//runtime filename

//fp = fopen("data","r");  	//compiletime filename
fp = fopen(s,"r"); 		//runtime filename
//fp = fopen(argv[1],"r");	//loadtime filename

if(fp==0)
{
printf("File not found\n");
return;
}

printf("file exists\n");
}
