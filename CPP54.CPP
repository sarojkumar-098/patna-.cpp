#include <stdio.h>
#include <conio.h>
void main()
{
int u[3][2][2],i,j,k;
for(i=1;i<=3;i++)
{
for(j=1;j<=2;j++)
{
for(k=1;k<=2;k++)
{
printf("enter no. of student");
scanf("%d",&u[i][j][k]);
}
}
}
clrscr();
for(i=1;i<=3;i++)
{
for(j=1;j<=2;j++)
{
for(k=1;k<=2;k++)
printf("students=%d\t",u[i][j][k]);
printf("\n");
}
}
getch();
}