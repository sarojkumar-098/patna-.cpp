 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int n=1,i=1,t,p=100,x=0;
 clrscr();
 while(i<=100)
 {
 t=n*i ;
 printf("%d\t",t);
 i++;
 }
 while(p>=0)
 {
 x+=p;
 p--;
 }printf("x=%d\n",x);
 getch();
 }
