#include<stdio.h>
#include<conio.h>
void main()
{
float radius,area,circum;
clrscr();
printf("Enter radius=");
scanf("%f",&radius);
area=3.14f*radius*radius;
printf("Area of circle is %f",area);
circum=2*3.14f*radius;
printf("circumference of circle is %f",circum);
getch();
}