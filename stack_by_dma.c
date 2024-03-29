#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
#define MAX 5
void push();
void pop();
void empty();
void isFull();
int stack_count();
void delete();
void peek();
void main()
{
    int ch;
    while (1)
    {
        printf("1. push an element \n");
        printf("2. pop an element \n");
        printf("3. check if stack is empty \n");
        printf("4. check if stack is full \n");
        printf("5. count/display elements present in stack \n");
        printf("6. empty and delete stack \n");
        printf("7. Print top of the stack \n");
        printf("8. exit \n");
        printf("Enter your choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            empty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            stack_count();
            break;
        case 6:
            delete ();
            break;
        case 7:
            peek();
            break;
        case 8:
            exit(0);
        default:
            printf("INVALID SELECTION\n");
        }
    }
}
void push()
{
    int val, count;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    count = stack_count();
    if (count <= MAX - 1)
    {
        printf("\nEnter value which you want to push into the stack :\n");
        scanf("%d", &val);
        temp->data = val;
        temp->link = top;
        top = temp;
    }
    else
        printf("WARNING: STACK FULL\n");
}
void pop()
{
    struct node *temp;
    if (top == NULL)
        printf("**Stack is empty**\n");
    else
    {
        temp = top;
        printf("Value popped out is %d \n", temp->data);
        top = top->link;
        free(temp);
    }
}
void empty()
{
    if (top == NULL)
        printf("STACK IS EMPTY\n");
    else
        printf("elements are present, stack is not empty \n");
}

void isFull()
{
    int count;
    count = stack_count();
    if (count == MAX)
    {
        printf("stack is full\n");
    }
    else
        printf("stack is not full \n");
}
int stack_count()
{
    int count = 0;
    struct node *temp;

    temp = top;
    while (temp != NULL)
    {
        printf(" %d\n", temp->data);
        temp = temp->link;
        count++;
    }
    printf("size of stack is %d \n", count);
}
void delete()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        pop();
        temp = temp->link;
    }
    printf("stack deleted\n");
}
void peek()
{
    if (top == NULL)
        printf("\n**Top is not available for an EMPTY stack**\n");
    else
        printf("\nTop of the stack is %d \n", top->data);
}
