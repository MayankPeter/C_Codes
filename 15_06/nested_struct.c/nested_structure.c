#include<stdio.h>
struct Date
{
int date;
int month;
int year;
};
struct st
{
int name;
struct Date dob;
struct Date doj;
};
void main()
{
struct st s1;
s1.dob.date = 1;
s1.dob.month = 2;
s1.dob.year = 1999;

s1.doj.date = 2;
s1.doj.month = 5;
s1.doj.year = 2000;

printf("%d:%d:%d\n",s1.dob.date, s1.dob.month, s1.dob.year);
printf("%d:%d:%d\n",s1.doj.date, s1.doj.month, s1.doj.year);
}
