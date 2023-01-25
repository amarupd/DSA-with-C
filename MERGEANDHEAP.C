#include <stdio.h>
#include <stdlib.h>
int temp;
void mergesort(int[], int, int);
void merge(int[], int, int, int, int);
void mergesort(int a[100], int i, int j)
{
       int mid;
       if (i < j)
       {
              mid = (i + j) / 2;
              mergesort(a, i, mid);
              mergesort(a, mid + 1, j);
              merge(a, i, mid, mid + 1, j);
       }
}

void merge(int a[100], int i1, int j1, int i2, int j2)
{
       int temp[100];
       int i, j, k;
       i = i1;
       j = i2;
       k = 0;
       while (i <= j1 && j <= j2)
       {
              if (a[i] < a[j])
                     temp[k++] = a[i++];
              else
                     temp[k++] = a[j++];
       }
       while (i <= j1)
              temp[k++] = a[i++];
       while (j <= j2)
              temp[k++] = a[j++];
       for (i = i1, j = 0; i <= j2; i++, j++)
              a[i] = temp[j];
}

void heapify(int a[], int n, int i)
{
       int largest = i;
       int left = 2 * i + 1;
       int right = 2 * i + 2;

       if (left < n && a[left] > a[largest])
              largest = left;

       if (right < n && a[right] > a[largest])
              largest = right;

       if (largest != i)
       {
              temp = a[i];
              a[i] = a[largest];
              a[largest] = temp;
              heapify(a, n, largest);
       }
}

void heapSort(int a[], int n)
{
       int i;
       for (i = n / 2 - 1; i >= 0; i--)
              heapify(a, n, i);
       for (i = n - 1; i >= 0; i--)
       {
              temp = a[0];
              a[0] = a[i];
              a[i] = temp;
              heapify(a, i, 0);
       }
}
int main()
{
       int a[100], n, i, op;
       printf("Enter no of elements\n");
       scanf("%d", &n);
       printf("Enter the nos\n");
       for (i = 0; i <= n - 1; i++)
       {
              scanf("%d", &a[i]);
       }
       while (1)
       {
              printf("\n1.Merge sort\n2.Heap sort\n3.Exit\n");
              scanf("%d", &op);
              switch (op)
              {
              case 1:
                     printf("MERGE SORT\n");
                     mergesort(a, 0, n - 1);
                     printf("sorted aay is\n");
                     for (i = 0; i <= n - 1; i++)
                     {
                            printf("%d -> ", a[i]);
                     }
                     printf("\n");
                     break;
              case 2:
                     printf("HEAP SORT\n");
                     heapSort(a, n);
                     printf("sorted aay is\n");
                     for (i = 0; i <= n - 1; i++)
                     {
                            printf("%d -> ", a[i]);
                     }
                     printf("\n");
                     break;
              case 3:
                     exit(1);
              default:
                     printf("Invalid Choice\n");
              }
       }
}
