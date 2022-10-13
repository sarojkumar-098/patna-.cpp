#include <stdio.h>
#include <conio.h>
void main()
{
int a[5]={3,5,7,9,11},*p,i;
p=a;
for(i=0;i<5;i++)
{
printf("%d\n",*p);
p++;
}
p=&a[4];
for(i=0;i<5;i++)
{
printf("%d\n",*p);
p--;
}
getch();
}