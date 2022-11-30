#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* link;
};
struct node* top=NULL;
void push();
void pop();
void traverse();
void peek();
void main()
{
  int ch;
  while(1)
  {
    printf("1. for PUSH\n");
    printf("2. for POP\n");
    printf("3. for TRAVERSE\n");
    printf("4. for PEAK ELEMENT\n");
    printf("5. for EXIT\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push();
      break;
      case 2: pop();
      break;
      case 3: traverse();
      break;
      case 4: peek();
      break;
      case 5: exit(0);
      default : printf("enter from 1-4 only\n");
    }
  }
}
void push()
{
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the node\n");
  scanf("%d",&temp->data);
  temp->link=top;
  top=temp;
}
void pop()
{
struct node* temp;
if(top==NULL)
{
  printf("stack is empty\n");
}
else
{
  temp=top;
  printf("%d is popped\n\n",temp->data);
  top=temp->link;
  free(temp);
}
}
void traverse()
{
  struct node* temp;
  if(top==NULL)
  {
    printf("stack is empty\n");
  }
  else
  {
    temp=top;
    printf("elements are :- \n");
    while(temp!=NULL)
    {
      printf("%d\n\n",temp->data);
      temp=temp->link;
    }
  }
}
void peek()
{
  struct node* temp;
  temp=top;
  if(top==NULL)
  {
    printf("stack is empty\n");
  }
  else
  {
    printf("PEAK ELEMENT IS :- %d\n",temp->data);
  }
}
