#include <stdio.h>
int main()
{
  int num, t1 = 0, t2 = 1, nextterm;
  printf("enter the number upto which you want to generate fibonacci series\n");
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    printf("%d ", t1);
    nextterm = t1 + t2;
    t1 = t2;
    t2 = nextterm;
  }
  return 0;
}
