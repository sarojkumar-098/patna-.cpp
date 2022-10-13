#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c;
char op;
clrscr();
scanf("%d%d",&a,&b);
fflush(stdin);
scanf("%c",&op);
switch(op)
{
case '+':c=a+b;break;
case '-':c=a-b;break;
case '*':c=a*b;break;
case '/':c=a/b;break;
case '%':c=a%b;break;
default:c=0;
}
printf("c=%d\n",c);
getch();
}