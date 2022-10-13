#include <stdio.h>
#include <conio.h>
void main()
{
char p;
clrscr();
scanf("%c",&p);
if(p=='s'||p=='S')
puts("saving account");
else if(p=='f'||p=='F')
puts("fixed account");
else if(p=='c'||p=='C')
puts("current account");
else
p=0;
getch();
}