#include <stdio.h>
#include <conio.h>
void main()
{
int n,f=1,i;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
f*=i;
printf("f=%d\n",f);
getch();
}
