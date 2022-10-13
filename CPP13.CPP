#include <stdio.h>
#include <conio.h>
void main()
{
int p;
clrscr();
scanf("%d",&p);
if(p<=14)
puts("child group");
else if(p<=22)
puts("young group");
else if(p<32)
puts("younger group");
else if(p<=60)
puts("old group");
else if(p>=60)
puts("rip");

getch();
}