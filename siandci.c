#include<stdio.h>
#include<math.h>
int main()
{
  double amount,rate,time,si,ci,temp;
  printf("enter the amount :- ");
  scanf("%lf",&amount);
  printf("enter the rate :- ");
  scanf("%lf",&rate);
  printf("enter the time :- ");
  scanf("%lf",&time);
  si=amount*rate*time/100;
  /*formula for coumpount intrest is ci=p(1+(r/100)) to the power t*/
  temp=1+(rate/100);
  ci=amount*pow(temp,time);
  printf("simple intrest :- %lf\n",si );
  printf("compound intrest :- %lf\n",ci );
}
