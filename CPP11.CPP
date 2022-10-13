#include <stdio.h>
#include <conio.h>
void main ()
{
char p;
clrscr();
scanf("%c",&p);
switch(p)
{
case 'S':
case 's':puts("saving account");break;
case 'C':
case 'c':puts("current account");break;
case 'F':
case 'f':puts("fixed account");break;
case 'R':
case 'r':puts("recurring account");break;
default:puts("invalid account");
}
getch();
}