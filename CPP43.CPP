#include <stdio.h>
#include <conio.h>
void main()
{
 int factorial(int),n,f;
 clrscr();
 scanf("%d",&n);
 f=factorial(n);
 printf("f=%d\n",f);
 getch();
 }
 int factorial(int m)
{
int fact=1;
if(m>0)
fact=m*factorial(m-1);
return(fact);
}
