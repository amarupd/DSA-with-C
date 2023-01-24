#include <stdio.h>
#include <stdlib.h>
struct bst
{
  int data;
  struct bst *left;
  struct bst *right;
};
struct bst *root = NULL;
void insert(int);
void delete();
void inorder();
void preorder();
void postorder();
void main()
{
  int n, choice, element;
  printf("\t\t BINARY SEARCH TREE\n\n");
  /*printf("enter the size\n");
  scanf("%d",&n);*/
  while (1)
  {
    printf("1. FOR INSERT\n");
    printf("2. FOR DELETE\n");
    printf("3. FOR INORDER TRAVERSAL\n");
    printf("4. FOR PRE-ORDER TRAVERSAL\n");
    printf("5. FOR POST-ORDER TRAVERSAL\n");
    printf("6. FOR EXIT\n");
    printf("enter your choice\n");
    scanf("%d", choice);
    switch (choice)
    {
    case 1:
      printf("enter the data\n");
      scanf("%d", &element);
      insert(element);
      break;
    case 2:
      delete ();
      break;
    case 3:
      inorder();
      break;
    case 4:
      preorder();
      break;
    case 5:
      postorder();
      break;
    case 6:
      exit(0);
    default:
      printf("enter the value from given numbers only");
    }
  }
}
void insert(int element)
{
  struct bst *temp, *parent;
  temp = (struct bst *)malloc(sizeof(struct bst));
  temp->data = element;
  temp->left = NULL;
  temp->right = NULL;
  parent = root;
  if (root = NULL)
  {
    root = temp;
  }
  else
  {
    struct bst *current;
    current = root;
    while (current)
    {
      parent = current;
      if (temp->data > current->data)
      {
        current = current->right;
      }
      else
      {
        current = current->left;
      }
      if (temp->data > parent->data)
      {
        parent->right = temp;
      }
      else
      {
        parent->left = temp;
      }
    }
  }
}
void inorder()
{
}
void postorder()
{
}
void preorder()
{
}
void delete()
{
}
