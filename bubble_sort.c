#include <stdio.h>
int main()
{
  int arr[100], i, j, temp, n;
  printf("enter the size of array\n");
  scanf("%d", &n);
  printf("enter the elements :- \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("bubble sorting done\n");
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d->", arr[i]);
  }
}
