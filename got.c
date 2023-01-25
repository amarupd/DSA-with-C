#include <stdio.h>
int main()
{
  int a, b, c, temp;
  printf("enter three numbers :- ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && b > c)
    printf("%d is greatest\n", a);
  if (b > a && b > c)
    printf("%d is greatest\n", b);
  if (c > a && c > b)
    printf("%d is greatest\n", c);
  return 0;
}
