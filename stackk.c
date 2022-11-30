#include<stdio.h>
#include<stdlib.H>
#define CAP 5
int top=-1;
int stack[CAP];
int isfull();
int isempty();
int pop();
int push(int);
int peek();
int traversing();
int main()
{
  int n,item;
  char ch;
  while(1){
  printf("\n\n1 for push \n2 for pop \n3 for peek\n4 for traversing \n5 for exit\n");
  printf("enter your choice " );
  scanf("%d",&ch);
  switch (ch) {
    case 1:printf("enter the element\n");
    scanf("%d",&n);
    push(n);
    break;
    case 2:item=pop();
    if(item==0)
    {
      printf("stack is underflow\n");
    }
    else
    {
      printf("popped item is %d\n",item );
    }
    break;
    case 3:printf("\n peek element is %d\n",peek());
    break;
    case 4:printf("entered numbers are\n");
    traversing();
    break;
    case 5: exit(0);
    default : printf("enter the number from above only\n");
  }
 }
}
int isfull()
{
  if(top==CAP-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int isempty()
{
  if(top==-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int push(int el)
{
  if(isfull())
  {
    printf("stack is full\n");
  }
  else
  {
    top++;
    stack[top]=el;
    printf("%d inserted \n",el);
  }
}
int peek()
{
  if(isempty())
  {
    return 0;
  }
  else
  {
    return stack[top];
  }
}
int traversing()
{
  int ele;
  if(isempty())
  {
    return 0;
  }
  else
  {
    for(int i=0;i<=top;i++)
    {
      printf("%d\n",stack[i]);
    }
  }
}
int pop()
{
  int ele;
  if(isempty())
  {
    return 0;
  }
  else{
    ele=stack[top--];
    return ele;
  }
}
