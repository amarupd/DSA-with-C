#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void quick_sort(int[],int,int);
int partition(int[],int,int);
void mergesort(int[],int,int);
void merge(int[],int,int,int,int);
void create (int[]);
void down_adjust(int[],int);
void heap_sort();
void quick_sort(int a[100],int l,int u)
{
int j;
if(l<u)
{
j=partition(a,l,u);
quick_sort(a,l,j-1);
quick_sort(a,j+1,u);
}
}
int partition(int a[100],int l,int u)
{
int v,i,j,temp;
v=a[l];
i=l;
j=u+1;
do
{
do
{
i++;
}while(a[i]<v&&i<=u);
do
{
j--;
}while(a[j]>v);
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}while(i<j);
a[l]=a[j];
a[j]=v;
return(j);
}

void mergesort(int a[100],int i, int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid);
mergesort(a,mid+1,j);
merge(a,i,mid,mid+1,j);
}
}
void merge(int a[100],int i1,int j1, int i2,int j2)
{
int temp[100];
int i,j,k;
i=i1;
j=i2;
k=0;
while(i<=j1&&j<=j2)
{
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=j1)
temp[k++]=a[i++];
while(j<=j2)
temp[k++]=a[j++];
for(i=i1,j=0;i<=j2;i++,j++)
a[i]=temp[j];
}
void heap_sort()
{
int heap[30],n,i,last,temp;
printf("enter no of elements\n");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("Enter the no\n");
scanf("%d",&heap[i]);
}
heap[0]=n;
create(heap);
while(heap[0]>1)
{
last=heap[0];
temp=heap[1];
heap[1]=heap[last];
heap[last]=temp;
heap[0]--;
down_adjust(heap,1);
}
printf("\nsorted datais\n");
for(i=0;i<=n-1;i++)
printf("%d\n",heap[i]);
}
void create(int heap[100])
{
int i,n;
n=heap[0];
for(i=n/2;i>=1;i--)
down_adjust(heap,i);
}
void down_adjust(int heap[100],int i)
{
int j,temp,n,flag=1;
n=heap[0];
while(2*i<=n && flag==1)
{
j=2*i;
if(j+1<=n && heap[j+1]>heap[j])
j=j+1;
if(heap[i]>heap[j])
flag=0;
else
{
temp=heap[i];
heap[i]=heap[j];
heap[j]=temp;
i=j;
}
}
}

void main()
{
int a[100],n,i,op;
while(1)
{
printf("\n1.Quick sort\n2.Merge sort\n3.Heap sort\n4.Exit\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("QUICK SORT\n");
       printf("Enter no of elements\n");
       scanf("%d",&n);
       printf("Enter the nos\n");
       for(i=0;i<=n-1;i++)
       scanf("%d",&a[i]);
       quick_sort(a,0,n-1);
       printf("sorted array is\n");
       for(i=0;i<=n-1;i++)
       printf("%d\n",a[i]);
       break;
case 2:printf("MERGE SORT\n");
       printf("Enter no of elements\n");
       scanf("%d",&n);
       printf("Enter the nos\n");
       for(i=0;i<=n-1;i++)
       scanf("%d",&a[i]);
       mergesort(a,0,n-1);
       printf("sorted array is\n");
       for(i=0;i<=n-1;i++)
       printf("%d\n",a[i]);
       break;
case 3:printf("HEAP SORT\n");
       heap_sort();
       break;
case 4:exit(1);
default:printf("Invalid Choice\n");
}
}
}
