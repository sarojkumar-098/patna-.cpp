#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,t;
clrscr();
for(i=1;i<=100;i++)
{
for(j=1;j<=10;j++)
{
t=i*j;
printf("%d\t",t);
}
printf("\n");
}
getch();
}