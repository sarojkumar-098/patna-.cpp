#include <stdio.h>
#include <conio.h>
void main()
{
int n,i=1,t;
clrscr();
scanf("%d",&n);
while(i<=100)
{t=n*i;
printf("%d\n",t);
i++;
}
getch();
}