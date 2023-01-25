#include <stdio.h>
#include <string.h>
struct point
{
  int real, imaginory;
};
int main()
{
  struct point a, b, sum;
  printf("enter the real number and imaginary for a");
  scanf("%d %d", &a.real, &a.imaginory);
  printf("enter the real number and imaginary for b");
  scanf("%d %d", &b.real, &b.imaginory);
  sum.real = a.real + b.real;
  sum.imaginory = a.imaginory + b.imaginory;
  printf("\n
  result is %d + i%d",sum.real,sum.imaginory);
}
