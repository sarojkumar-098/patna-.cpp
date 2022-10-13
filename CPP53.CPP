#include <stdio.h>
#include <conio.h>
void main()
{
int t[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}},i,j,sum;
for(i=0;i<4;i++)
{
sum=0;
for(j=0;j<3;j++)
sum=sum+t[i][j];
printf("sum=%d\n",sum);
}
for(j=0;j<3;j++)
{
sum=0;
for(i=0;i<4;i++)
sum=sum+t[i][j];
printf("sum=%d\n",sum);
}
getch();
}