#include <stdio.h>
#include <conio.h>
void main()
{
int n,f=1;
scanf("%d",&n);
do
{
f*=n;
n--;
}
while(n>0);
printf("f=%d\n",f);
getch();
}