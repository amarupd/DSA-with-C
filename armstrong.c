#include <stdio.h>
#include <math.h>
int main()
{
  int number,count=0,sum=0,remainder,temp;
  printf("enter the number to print armstrong number :- \n");
  scanf("%d",&number );
  printf("armstrongnumbers are\n");
  for(int i=0;i<number;i++)
  {
    temp=i;
    while(temp>0)
    {
      temp=temp/10;
      ++count;
    }
    temp=i;
  while (temp>0)
  {
    remainder=temp%10;
    sum=sum+pow(remainder,count);
    temp=temp/10;
  }
  if(sum==i)
  {
  printf("%d ",i );
  }
  count=0;
  sum=0;
}
return 0;
}
