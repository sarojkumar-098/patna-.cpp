#include <stdio.h>
#include <conio.h>
void main()
{
char name[10][15];
int n,i;
printf("enter no. of student");
scanf("%d",&n);
fflush(stdin);for(i=0;i<n;i++)
{
printf("enter name");
gets(name[i]);
}
for(i=0;i<n;i++)
puts(name[i]);
for(i=n-1;i>=0;i--)
puts(name[i]);
getch();
}