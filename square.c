#include <stdio.h>
#include <conio.h>
int square(int m);
void main()
{
  int a;
  printf("enter the number ");
  scanf("%d", &a);
  printf("square of the number %d", square(a));
  getch();
}
int square(int m)
{
  int s;
  s = m * m;
  return s;
}
