#include<stdio.h>
void main()
{
char ch;
printf("Enter a character\n");
scanf(" %c",&ch);

switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':printf("Vowels\n");
	break;
default: printf("Consonant\n");
}

}
