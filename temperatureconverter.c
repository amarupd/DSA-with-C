#include <stdio.h>
int main()
{
  double celsius, farenhiet;
  printf("enter the temperature in celsius :- ");
  scanf("%lf", &celsius);
  farenhiet = 32 + celsius * 9 / 5;
  printf("the temperature in farenhiet is :- %lf\n", farenhiet);
  return 0;
}
