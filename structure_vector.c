#include<stdio.h>
struct numb{
  int x,y,sum;
};
int main()
{
  struct numb n1,n2,s1,s2;
  n1.x=101;
  n1.y=202;
  n2.x=545;
  n2.y=1245;
  printf("x dim is %d y dim is %d",n1.x,n1.y);
  printf("\nx dim is %d y dim is %d\n",n2.x,n2.y);
  s1.sum=n1.x+n2.x;
  s2.sum=n1.y+n2.y;
  printf("sum of x dim is %d and sum of y dim is %d",s1.sum,s2.sum);
  return 0;
}
