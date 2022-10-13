#include <stdio.h>
#include <conio.h>
void main()
{
int a[10][10],r,c,i,j;
puts("enter row & column size");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter value");
scanf("%d",&a[i][j]);
}
}
clrscr();
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
getch();
}


