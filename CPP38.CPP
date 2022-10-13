#include <stdio.h>
#include <conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf("*",j);
printf("\n");
}
for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++)
   printf("*",j);
  printf("\n");
}
getch();
}