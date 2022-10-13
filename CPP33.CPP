#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,mid=40;
clrscr();
for(i=1;i<=9;i+=2)
{
for(j=1;j<=mid;j++)
  printf(" ");
for(j=1;j<=i;j++)
  printf("*");
printf("\n");
mid--;
}
getch();
}