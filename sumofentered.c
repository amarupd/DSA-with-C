#include <stdio.h>
int main()
{
  int number,reminder,sum=0,temp;
  printf("enter the number\n");
  scanf("%d",&number );
  temp=number;
  while(number>0)
  {
    reminder=number%10;
    sum=sum+reminder;
    number=number/10;
  }
  number=temp;
  printf("sum of digits of %d is %d\n",number,sum );
  return 0;
}
