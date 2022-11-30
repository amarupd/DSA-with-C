#include <stdio.h>
int main()
{
  int number,count=0;
  printf("enter the number to check prime or not :- \n");
  scanf("%d",&number);
  for(int i=1;i<=number;i++)
  {
    if(number%i==0)
    {
    count++;
    }
  }
  if(count==2)
  printf("%d is prime number\n",number );
  else
  printf("%d is not prime number\n",number );
  return 0;
}
