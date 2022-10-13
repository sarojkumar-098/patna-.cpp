 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int i=1,t,x=0;
 clrscr();
 do
 {
  printf("%d\t",i);
  x+=i;
  i+=1;
 }
  while(i<=100);
 printf("x=%d\n",x);
 getch();
 }

