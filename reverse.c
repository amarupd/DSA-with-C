#include <stdio.h>
int main()
{
  int number, reverse = 0, reminder;
  printf("enter the number\n");
  scanf("%de", &number);
  while (number > 0)
  {
    reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number = number / 10;
  }
  printf("reversed number is %d ", reverse);
  return 0;
}
