#include <stdio.h>
#include<stdlib.h>
struct bst{
struct bst *left;
int data;
struct bst *right;
} *root, *temp, *p;
void create();
void insert();
void search(struct bst *ptr);
void inorder(struct bst *ptr);
void preorder(struct bst *ptr);
void postorder(struct bst *ptr);
int main()
{
int c;
printf("\t\t\t BINARY SEARCH TREE\n");
while(1)
{
  printf("\n");
  printf("1. FOR INSERT\n");
  printf("2. FOR INORDER TRAVERSAL\n");
  printf("3. FOR PRE-ORDER TRAVERSAL\n");
  printf("4. FOR POST-ORDER TRAVERSAL\n");
  printf("5. FOR EXIT\n");
  printf("enter your choice\n");
scanf("%d", &c);
switch(c){
  case 1:insert();
         break;
  case 2:inorder(root);
         break;
  case 3:preorder(root);
         break;
  case 4:postorder(root);
         break;
  case 5:exit(0);
         default: printf("enter the value from given numbers only");
   }
  }
 return 0;
}
void discard()
{

}
void create()
{
    temp = malloc(sizeof(struct bst));
    printf("Enter data: ");
    scanf("%d", &(temp->data));
    temp->left = NULL;
    temp->right = NULL;
}
void insert(){
    create();
    if(root == NULL)
    root = temp;
    else
    search(root);
}
void search(struct bst *ptr)
{
    if((temp->data < ptr->data) && (ptr->left != NULL))
    search(ptr->left);
    else if((temp->data < ptr->data) && (ptr->left == NULL))
    ptr->left = temp;
    else if((temp->data > ptr->data) && (ptr->right !=NULL))
    search(ptr->right);
    else if((temp->data > ptr->data) && (ptr->right == NULL))
    ptr->right = temp;
}
void inorder(struct bst *ptr)
{
    if (root == NULL)
    {
    printf("Tree is empty");
    return;
    }
    if (ptr->left != NULL)
    inorder(ptr->left);
    printf("%d ", ptr->data);
    if (ptr->right != NULL)
    inorder(ptr->right);
}
void preorder(struct bst *current)
{
	printf("%d\n", current->data);
	if (current->left)
		preorder(current->left);
	if (current->right)
		preorder(current->right);
}

void postorder(struct bst* current)
{
	if (current->left)
		postorder(current->left);
	if (current->right)
		postorder(current->right);
	printf("%d\n", current->data);
}
