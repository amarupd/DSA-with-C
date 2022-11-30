#include <stdio.h>
int main()
{
  int num,fact=1;
  printf("enter the number to get factorial :- ");
  scanf("%d",&num );
  for(int i=num;i>0;i--)
  {
    fact=fact*i;
  }
  printf("factorial of %d is %d\n",num,fact );
  return 0;
}
