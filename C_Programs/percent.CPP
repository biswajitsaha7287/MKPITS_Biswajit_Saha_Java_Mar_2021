#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,total,percent;
clrscr();
printf("Enter 1st subject=");
scanf("%f",&a);
printf("Enter 2nd subject=");
scanf("%f",&b);
printf("Enter 3rd subject=");
scanf("%f",&c);
total=a+b+c;
printf("total marks of subjects= %f",total);
percent=(total/300)*100;
printf("\n Percentage of student is %f",percent);
getch();
}