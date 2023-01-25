#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[], int n);
void selectionsort(int arr[], int n);
void insertionsort(int arr[], int n);
void display(int arr[], int n);
int main()
{
  int arr[100], i, j, temp, n, ch;
  printf("enter the size of array\n");
  scanf("%d", &n);
  printf("enter the elements :- \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  while (1)
  {
    printf("1. DISPLAY ARRAY \n");
    printf("2. BUBBLE SORT \n");
    printf("3. SELECTION SORT \n");
    printf("4. INSERTION SORT \n");
    printf("5. EXIT \n");
    printf("enter your choice :- \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      display(arr, n);
      break;
    case 2:
      bubblesort(arr, n);
      break;
    case 3:
      selectionsort(arr, n);
      break;
    case 4:
      insertionsort(arr, n);
      break;
    case 5:
      exit(1);
    default:
      printf("invalid option \n enter from 1 to 5 only\n");
    }
  }
}
void bubblesort(int arr[], int n)
{
  int i, j, temp;
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
  printf("after bubble sortelements are :- \n");
  display(arr, n);
}
void selectionsort(int arr[], int n)
{
  int i, j, min, temp;
  for (i = 0; i < n - 1; i++)
  {
    min = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  printf("after selection sort elements are :- \n");
  display(arr, n);
}
void insertionsort(int arr[], int n)
{
  int i, j, key, temp;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  printf("after insertion sort elements are :- \n");
  display(arr, n);
}
void display(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d -> ", arr[i]);
  }
  printf("\n");
}
