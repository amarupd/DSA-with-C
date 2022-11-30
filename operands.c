#include <stdio.h>
int main()
{
  double num1,num2,result=0;
  char ch;
  printf("enter the operation you want to perform :- (+,-,*,/)\n");
  scanf("%c",&ch );
  printf("enter the two numbers :- ");
  scanf("%lf %lf",&num1,&num2);
  switch (ch) {
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '*':
    result=num1*num2;
    break;
    case '/':
    result=num1/num2;
    break;
    default :
    printf("enter from given options only\n");
  }
  printf("%lf%c%lf=%lf",num1,ch,num2,result );
  return 0;
}
