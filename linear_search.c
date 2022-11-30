#include<stdio.h>
void main()
{
  int arr[100],i,x,n;
  printf("enter the size:-\n");
  scanf("%d",&n);
  printf("enter the elements:-\n");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter the element to search :-\n");
  scanf("%d",&x);
  for(i=1;i<=n;++i)
  {
        if(arr[i]==x)
            break;
  }
  if(i<=n)
  printf("%d is present at location %d\n",x,i);
  else
  printf("element not found\n");
}
