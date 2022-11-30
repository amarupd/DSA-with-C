#include<stdio.h>
#define CAP 5
int top=-1;
int stack[CAP];
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
    printf("stack is full");
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
int main()
{
  int n,item;
  for(int i=0;i<CAP;i++)
  {
    scanf("%d",&n);
    push(n);
  }
printf("\n peek element is %d\n",peek());
printf("entered numbers are\n");
traversing();
item=pop();
if(item==0)
{
  printf("stack is underflow");
}
else
{
  printf("popped item is %d\n",item );
}
}
