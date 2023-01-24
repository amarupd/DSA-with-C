#include <stdio.h>
#include <stdlib.h>
#define size 6
int front = -1;
int rear = -1;
int cqueue[size];
void insert();
void delete();
void display();
void main()
{
  int choice;
  while (1)
  {
    printf("enter the choice \n");
    printf("1 : Insert element\n");
    printf("2 : Dequeue an element \n");
    printf("3 : Display\n");
    printf("4 : Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("wrong choice\n");
      break;
    }
  }
}

void insert()
{
  int ele;
  printf("enter the element\n");
  scanf("%d", &ele);
  if ((size == rear + 1) || (front == rear + 1))
  {
    printf("Circular queue is full\n");
  }
  else if (front == -1 && rear == -1)
  {
    front = rear = 0;
    cqueue[rear] = ele;
  }
  else if (rear == size - 1)
  {
    rear = 0;
    cqueue[rear] = ele;
  }
  else
  {
    rear++;
    cqueue[rear] = ele;
  }
}

void delete()
{
  if (front == -1)
  {
    printf("Queue Underflow\n");
    return;
  }
  printf("Element deleted from queue is : %d\n", cqueue[front]);
  if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    if (front == size - 1)
      front = 0;
    else
      front = front + 1;
  }
  printf("\n");
}

void display()
{
  int front_pos = front, rear_pos = rear;
  if (front == -1)
  {
    printf("Queue is empty\n");
    return;
  }
  printf("Queue elements :\n");
  if (front_pos <= rear_pos)
    while (front_pos <= rear_pos)
    {
      printf("%d -> ", cqueue[front_pos]);
      front_pos++;
    }
  else
  {
    while (front_pos <= size - 1)
    {
      printf("%d -> ", cqueue[front_pos]);
      front_pos++;
    }
    front_pos = 0;
    while (front_pos <= rear_pos)
    {
      printf("%d -> ", cqueue[front_pos]);
      front_pos++;
    }
  }
  printf("\n");
}
