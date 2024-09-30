
#include<stdio.h>
#include<conio.h>
 
    int main()
 {
 
 int a,b,c,d,e,sum;
 float avg;
 clrscr();
 printf("enter five numbers sequencely: \n");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 sum=a+b+c+d+e;
 avg=sum/5.0;
 printf("avrage of five numbers is: %.2f",avg);
 getch();
 return 0;
 }   