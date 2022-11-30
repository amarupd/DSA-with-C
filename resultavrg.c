#include<stdio.h>
int main()
{
  int math,english,hindi,sst,science;
  double per,total=0;
  printf("enter the marks of math :- ");
  scanf("%d",&math);
  printf("enter the marks of english :- ");
  scanf("%d",&english);
  printf("enter the marks of hindi :- ");
  scanf("%d",&hindi);
  printf("enter the marks of sst :- ");
  scanf("%d",&sst);
  printf("enter the marks of science :- ");
  scanf("%d",&science);
  total=math+english+hindi+sst+science;
  per=total*100/500;
  printf("total marks :- %lf\n", total);
  printf("percentage :- %lf\n",per );
  return 0;
}
