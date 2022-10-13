#include<stdio.h>
#include <conio.h>
void main ()
{
int a,b;
float c;
clrscr ();
scanf ("%d%d",&a,&b);
if(b!=0)
{
c=a/b;
printf("c=%f\n",c);
}
getch ();
}