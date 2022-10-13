#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char a[10],b[10];
int d;
gets(a);gets(b);
d=strcmp(a,b);
printf("d=%d\n",d);
getch();
}