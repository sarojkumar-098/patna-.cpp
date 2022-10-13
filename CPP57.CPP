#include <stdio.h>
#include <conio.h>
void main()
{
int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j,*p;
for(i=0;i<3;i++)
{
p=&a[i][0];
for(j=0;j<4;j++)
{
printf("%d\t",*p);
p++;
}
printf("\n");
}
getch();
}