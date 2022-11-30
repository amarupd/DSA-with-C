#include<stdio.h>
#include<conio.h>
int swap(int m,int n);
void main()
{
int a,b;
printf("enter the number ");
scanf("%d %d",&a,&b);
printf("\nbefore swapping %d & %d",a,b);
swap(a,b);
getch();
}
int swap(int m,int n)
{
  int temp;
  temp=m;
  m=n;
  n=temp;
  printf("\nafter swapping %d & %d",m,n);
}
