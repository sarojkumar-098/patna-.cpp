#include <stdio.h>
#include <conio.h>
void main()
{
int a=4,*b;
b=&a;
printf("address of a=%u\n",&a);
printf("value of a=%d\n", a);
printf("address of b=%u\n",&b);
printf("value of b=%u\n",b);
printf("value a+b=%d\n",*b);
getch();
}