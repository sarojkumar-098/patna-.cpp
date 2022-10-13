#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int i=0,sum=0;
clrscr();
while(i<=100)
{
i++;
if(i%11==0)exit(1);
sum+=i;
}
printf("sum=%d\n",sum);
getch();
}