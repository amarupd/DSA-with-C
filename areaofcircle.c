#include<stdio.h>
int main()
{
  double radius,area=0,circum=0,pi=3.14;
  printf("enter the radius :- ");
  scanf("%lf",&radius);
  area=pi*radius*radius;
  circum=2*pi*radius;
  printf("area of circle is :- %lf\n",area );
  printf("circumference of circle is :- %lf\n",circum );
  return 0;
}
