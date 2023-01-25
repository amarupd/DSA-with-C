#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b);
int main()
{
  int m = 32, n = 25;
  printf("number before swapping %d and %d", m, n);
  swap(&m, &n);
  printf("number after swapping %d and", m, n);
  return 0;
}
void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
