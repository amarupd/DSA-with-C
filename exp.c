#include <stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY], top = -1;
void push(int ele);
int pop();
int isFull();
int isEmpty();
void traverse();
void peek();
void main()
{
    char ch, item;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Element to Push:\n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            if (item == 0)
            {
                printf("Stack is underflow\n");
            }
            else
            {
                printf("Popped Item: %d\n", item);
            }
            break;
        case 3:
        peek();
            break;
        case 4: printf("Entered Numbers are\n");
            traverse();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input\n");
            break;
        }
    }
  }
    void push(int ele)
    {
        if (isFull())
        {
            printf("Stack is overflow\n");
        }
        else
        {
            top++;
            stack[top] = ele;
            printf("%d pushed\n", ele);
        }
    }
    int isFull()
    {
        if (top == CAPACITY - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int pop()
    {
        int ele;
        if (isEmpty())
        {
            return 0;
        }
        else
        {
            ele= stack[top--];
            return ele;
        }
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            printf("Stack is empty\n");
        }
        else
        {
            printf("peek element is %d\n",stack[top]);
        }
    }
    void traverse()
    {
        if (isEmpty())
        {
            printf("Stack is empty\n");
        }
        else
        {
            int i;
            printf("Stack Elements: \n");
            for (i = 0; i <= top; i++)
            {
                printf("%d\n", stack[i]);
            }
        }
    }
