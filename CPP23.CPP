 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int i=2,t,x=0;
 clrscr();
 while(i<=100)
 {
  printf("%d\t",i);
  x+=i;
  i+=2;
 }
 printf("x=%d\n",x);
 getch();
 }

