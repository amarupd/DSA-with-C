#include <stdio.h>
int main()
{
  int num, sum1 = 0, sum2 = 0;
  printf("enter the number :- ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    if (i % 2 == 0)
    {
      sum1 = sum1 + i;
    }
    else
    {
      sum2 = sum2 + i;
    }
  }
  printf("sum of even term is %d\nsum of odd term is %d", sum1, sum2);
  return 0;
}
