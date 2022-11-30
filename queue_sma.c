#include<stdio.h>
#include<stdlib.h>
#define cap 5
int queue[cap];
int front=0;
int rear=0;
void insert();
void delete();
void display();
void main()
{
  int ch;
  while(1)
  {
    printf("1. FOR INSERT ELEMENT IN QUEUE\n");
    printf("2. FOR DELETE ELEMENT IN QUEUE\n");
    printf("3. FOR DISPLAY ELEMENTS IN QUEUE\n");
    printf("4. FOR EXIT FORM THE QUEUE\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: insert();
      break;
      case 2: delete();
      break;
      case 3: display();
      break;
      case 4: exit(1);
      default:
      printf("ENTER FROM 1-4 ONLY\n");
    }
  }
}
void insert()
{
  if(cap==rear)
  {
    printf("QUEUE IS FULL\n");
  }
  else
  {
    int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
    queue[rear]=ele;
    rear++;
  }
}
void delete()
{
  if(front==rear)
  {
    printf("queue is empty\n");
  }
  else
  {
    for(int i=0;i<rear-1;i++)
    {
      queue[i]=queue[i+1];
    }
    rear--;
  }
}
void display()
{
  if(front==rear)
  {
    printf("queue is empty\n");
  }
  else
  {
    for(int i=0;i<rear;i++)
    {
      printf("%d -> ",queue[i]);
    }
    printf("\n");
  }
}
