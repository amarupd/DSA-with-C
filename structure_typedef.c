#include <stdio.h>
#include <string.h>
typedef struct point
{
  int real;
  int imaginory;
} comp;
void display(comp c)
{
  printf("the value of real part is %d\n", c.real);
  printf("the value of imaginary part is %d\n", c.imaginory);
}
int main()
{
  int i;
  comp a[5];
  for (i = 0; i < 5; i++)
  {
    printf("enter the real number");
    scanf("%d", &a[i].real);
    printf("enter the imaginary number");
    scanf("%d", &a[i].imaginory);
  }
  for (i = 0; i < 5; i++)
  {
    display(a[i]);
  }
  return 0;
}
