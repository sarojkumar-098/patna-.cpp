#include <stdio.h>
#include <conio.h>
void main()
{
int N,F=1;
clrscr();
scanf("%d",&N);
while(N>0)
{
 F*=N;
 N--;
 }
 printf("F=%d\n",F);
 getch();
 }
