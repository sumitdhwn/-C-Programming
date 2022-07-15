#include<stdio.h>
#include<conio.h>
void honoi(int n,char a,char b, char c)
{
if(n==1){
printf("move disk 1 from tower %c to %c\t",a,c);
}
else
{
honoi(n-1,a,b,c);
printf(" move disk 1 from tower %c to %c\t",a,c);
honoi(n-1,a,b,c);
}
}
void main()
{
int n;
clrscr();
printf("enter no. jof disk: ");
scanf("%d",&n);
if(n<0)
printf("no. -ve values");
else
honoi(n,'a','b','c');
getch();
}