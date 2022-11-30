#include<stdio.h>
double divn(float a,float b);
int main()
{
  float n=10,m=3;
  printf("%lu",divn(n,m));
  getch();
}
double divn(float a,float b)
{
  float div=0;
  div=a/b;
  return div;
}
