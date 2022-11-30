#include<stdio.h>
int main()
{
  int low=0,mid=0,n,key=0,high,ele,arr[100],i,j,temp,found;
  printf("enter the size of array\n");
  scanf("%d",&n);
  high=n-1;
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\n\nelements are sorted\n\n\n");
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d -> ",arr[i]);
  }
  printf("\n");
  printf("enter the element to search:-\n");
  scanf("%d",&ele);
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(ele<arr[mid])
        high=mid-1;
    else if(ele>arr[mid])
             low=mid+1;
    else if(ele==arr[mid])
    {
      printf("%d fount at location %d \n",ele,mid+1);
      found=1;
      break;
    }
  }
  if(found==1)
    printf("element found\n");
  else
    printf("element is not found\n");
}
