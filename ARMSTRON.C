#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,r,sum=0;
clrscr();
printf("enter a number here");
scanf("%d",&n);
a=n;
while(n!=0)
 {
 r=n%10;
 sum=sum+r*r*r;
 n=n/10;
 }

if(a==sum)
{
printf("%d is an armstrong number",a);
}
else
{
printf("%d is not an armstrong number",a);
}
getch();
}
