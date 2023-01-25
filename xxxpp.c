#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};
struct node *root = NULL;
int len;
void append();
void addatbegin();
void addatafter();
int length(void);
void display(void);
void delete(void);
void main()
{
  int ch;
  while (1)
  {
    printf("single linked list operation\n");
    printf("1. append\n");
    printf("2. add at begin\n");
    printf("3. add at after\n");
    printf("4. length\n");
    printf("5. display\n");
    printf("6. delete\n");
    printf("7. quit\n");
    printf("Enter your choice\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      append();
      break;
    case 2:
      addatbegin();
      break;
    case 3:
      addatafter();
      break;
    case 4:
      len = length();
      printf("number of nodes is %d\n\n", len);
      break;
    case 5:
      display();
      break;
    case 6:
      delete ();
      break;
    case 7:
      exit(1);
    default:
      printf("invalid entry\n\n");
    }
  }
}
void append()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("enter node data\n");
  scanf("%d", &temp->data);
  temp->link = NULL;
  if (root == NULL)
  {
    root = temp;
  }
  else
  {
    struct node *p;
    p = root;
    while (p->link != NULL)
    {
      p = p->link;
    }
    p->link = temp;
  }
}
int length()
{
  int count = 0;
  struct node *temp;
  temp = root;
  while (temp != NULL)
  {
    count++;
    temp = temp->link;
  }
  return count;
}
void display()
{
  struct node *temp;
  temp = root;
  if (temp == NULL)
  {
    printf("link is empty\n\n");
  }
  else
  {
    while (temp != NULL)
    {
      printf("%d -> ", temp->data);
      temp = temp->link;
    }
    printf("\n\n");
  }
}
void delete()
{
  struct node *temp;
  int loc;
  printf("enter location to delete\n");
  scanf("%d", &loc);
  if (loc > length())
  {
    printf("invalid location");
  }
  else if (loc == 1)
  {
    temp = root;
    root = temp->link;
    temp->link = NULL;
    free(temp);
  }
  else
  {
    struct node *p = root, *q;
    int i = 1;
    while (i < loc - 1)
    {
      p = p->link;
      i++;
    }
    q = p->link;
    p->link = q->link;
    q->link = NULL;
    free(q);
  }
}
void addatafter()
{
  struct node *temp, *p;
  int loc, len, i = 1;
  printf("enter the location\n");
  scanf("%d", &loc);
  len = length();
  if (loc > len)
  {
    printf("invalid location");
    printf("currently list is having %d nodes", len);
  }
  else
  {
    p = root;
    while (i < loc - 1)
    {
      p = p->link;
      i++;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter the node data\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    temp->link = p->link;
    p->link = temp;
  }
}
void addatbegin()
{
  struct node *temp, *p;
  p = root;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("enter the node data\n");
  scanf("%d", &temp->data);
  temp->link = NULL;
  temp->link = p;
  root = temp;
}
