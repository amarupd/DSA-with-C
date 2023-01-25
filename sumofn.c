#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("enter the number upto which you want the result :- ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    sum = sum + i;
  }
  printf("the sum of %d number is %d\n", n, sum);
  return 0;
}
