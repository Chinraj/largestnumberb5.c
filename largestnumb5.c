#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers :");
scanf("\%d%d%d",&a,&b,&c);
if(c>b && c>a)
{
printf("%d is the largest number",c);
}
else if(b>a)
{
printf("%d is the largest number",b);
}
else
{
printf("%d is the largest number",a);
}
getch();
}
