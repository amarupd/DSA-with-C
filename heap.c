#include<stdio.h>
int temp;
void heapify(int arr[], int n, int i)
{
int largest = i;
int left = 2*i + 1;
int right = 2*i + 2;

if (left < n && arr[left] >arr[largest])
largest = left;

if (right < n && arr[right] > arr[largest])
largest = right;

if (largest != i)
{
temp = arr[i];
    arr[i]= arr[largest];
    arr[largest] = temp;
heapify(arr, n, largest);
}
}

void heapSort(int arr[], int n)
{
int i;
for (i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
for (i=n-1; i>=0; i--)
{
temp = arr[0];
    arr[0]= arr[i];
    arr[i] = temp;
heapify(arr, i, 0);
}
}

void main()
{
int arr[100],n;
int i;
printf("enter the size\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0l;i<n;i++)
{
  scanf("%d",&arr[i]);
}
heapSort(arr, n);

printf("printing sorted elements\n");
for (i=0; i<n; ++i)
printf("%d\n",arr[i]);
}
