#include<stdio.h>
#include<conio.h>
void add();
int a,b,e;
void main()
{
clrscr();
scanf("%d%d",&a,&b);
e=add(a,b);
printf("%d",e);
getch();
}
int add (a,b)
{
if(a==1)
{
int c=a+b;
return c;
}
else
{
return a;
}
}