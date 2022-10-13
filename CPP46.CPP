#include <stdio.h>
#include <conio.h>
void main()
{
int a[5]={10,15,20,25,30},i;
for(i=0;i<5;i++)
printf("%d\n",a[i]);
for(i=4;i>=0;i--)
printf("%d\n",a[i]);
getch();
}