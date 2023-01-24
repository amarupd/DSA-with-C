#include <stdio.h>
#include <stdlib.h>
struct node
{
  struct node *left;
  int data;
  struct node *right;
};
struct node *root = NULL;
int len;
void append();
void addatbegin();
void addatafter();
int length();
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
  struct node *temp, *p;
  p = root;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("enter the node\n");
  scanf("%d", &temp->data);
  temp->right = NULL;
  temp->left = NULL;
  if (root == NULL)
  {
    root = temp;
  }
  else
  {
    while (p->right != NULL)
    {
      p = p->right;
    }
    p->right = temp;
    temp->left = p;
    temp->right = NULL;
  }
}
int length()
{
  int count = 0;
  struct node *p = root;
  while (p != NULL)
  {
    count++;
    p = p->right;
  }
  return count;
}
void display()
{
  struct node *temp;
  if (root == NULL)
  {
    printf("no nodes are present");
  }
  else
  {
    temp = root;
    while (temp != NULL)
    {
      printf("%d -> ", temp->data);
      temp = temp->right;
    }
  }
}
void delete()
{
  struct node *temp;
  int loc, i = 1;
  printf("enter the location to delete");
  scanf("%d", &loc);
  if (loc > length())
  {
    printf("invalid location");
  }
  else if (loc == 1)
  {
    temp = root;
    root = temp->right;
    temp->right = NULL;
    root->left = NULL;
    free(temp);
  }
  else
  {
    struct node *p, *q;
    temp = root;
    while (i < loc - 1)
    {
      temp = temp->right;
      i++;
    }
    p = temp->right;
    temp->right = p->right;
    p->right->left = temp;
    free(p);
  }
}
void addatafter()
{
  struct node *temp, *p;
  p = root;
  int loc, len, i = 1;
  len = length();
  printf("enter the location you want to add data\n");
  scanf("%d", &loc);
  if (loc > len)
  {
    printf("invalid location\n");
  }
  else if (loc == len)
  {
    append();
  }
  else
  {
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    while (i < loc)
    {
      p = p->right;
      i++;
    }
    temp->right = p->right;
    p->right->left = temp;
    temp->left = p;
    p->right = temp;
  }
}
void addatbegin()
{
  struct node *temp, *p;
  p = root;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("enter the node data\n");
  scanf("%d", &temp->data);
  temp->right = NULL;
  temp->left = NULL;
  if (root == NULL)
  {
    root = temp;
  }
  else
  {
    p->left = temp;
    temp->right = p;
    root = temp;
  }
}
