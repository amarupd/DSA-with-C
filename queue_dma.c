#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 10
struct node
{
    int data;
    struct node *link;
}*front, *rear;
void insert();
void delete();
void queue_size();
void check();
void first_element();
void main()
{
    int choice, value;
    while(1)
    {
        printf("enter the choice \n");
        printf("1 : Insert element\n");
        printf("2 : Dequeue an element \n3 : Check if empty\n");
        printf("4 : First element of the queue\n");
        printf("5 : Total number of entries in the queue\n");
        printf("6 : Exit\n");
        scanf("%d", &choice);
        switch (choice)    // menu driven program
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            check();
            break;
        case 4:
            first_element();
            break;
        case 5:
            queue_size();
            break;
        case 6:
            exit(0);
        default:
            printf("wrong choice\n");
            break;
        }
    }
}
void insert()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to be inserted \n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (rear  ==  NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
}

void delete()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("queue is empty \n");
        front = rear = NULL;
    }
    else
    {
        printf("deleted element is %d\n", front->data);
        front = front->link;
        free(temp);
    }
}
void check()
{
    if (front == NULL)
        printf("\nQueue is empty\n");
    else
        printf("Elements are present in the queue\n");
}
void first_element()
{
    if (front == NULL)
    {
        printf("The queue is empty\n");
    }
    else
        printf("The front element is %d \n", front->data);
}
void queue_size()
{
    struct node *temp;

    temp = front;
    int count = 0;
    if (front  ==  NULL)
    {
        printf(" queue empty \n");
    }
    while (temp)
    {
        printf("%d  ", temp->data);
        temp = temp->link;
        count++;
    }
    printf("size of queue is %d \n",count);
}
