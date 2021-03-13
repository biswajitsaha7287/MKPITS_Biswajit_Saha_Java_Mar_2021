#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
clrscr();
printf("Enter a=");
scanf("%f",&a);
printf("Enter b=");
scanf("%f",&b);
c=a+b;
printf("sum of a & b = %f",c);
c=a-b;
printf("\ndifference of a & b = %f",c);
c=a*b;
printf("\nmultiplication of a & b = %f",c);
c=a/b;
printf("\ndivision of a & b = %f",c);
getch();
}