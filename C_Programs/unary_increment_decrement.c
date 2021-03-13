#include<stdio.h>
#include<conio.h>
void main()
{
float a=10;
float b=5,c,d;
clrscr();
c=a++;
printf("a=%f",a);
printf("\n",c);
d=b--;
printf("b=%f",b);
printf("\n",d);
getch();
}
