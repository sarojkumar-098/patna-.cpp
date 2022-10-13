#include <stdio.h>
#include <conio.h>
void main()
{
 int sum(int),n,f;
 clrscr();
 scanf("%d",&n);
 f=sum(n);
 printf("f=%d\n",f);
 getch();
 }
 int sum(int m)
{
int fact=1;
if(m>1)
fact=m+sum(m-1);
return(fact);
}
