#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

struct node *start, *temp, *newNode;

struct node *createNode(int value)
{
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertionatEnd()
{

    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    newNode = createNode(value);
    if (start == NULL)
    {
        start = newNode;
        newNode->prev = start;
        newNode->next = start;
    }
    else
    {
        start->prev->next=newNode;
        newNode->prev=start->prev;
        newNode->next = start;
        start->prev=newNode;

    }
}

void displayBackward()
{
    temp = start->prev;
    while (temp->prev != start->prev)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("%d->", temp->data);
    printf("%d", start->prev->data);
}

void displayFunction()
{
    temp = start;
    while (temp->next != start)
    {
        printf(" %d->", temp->data);
        temp = temp->next;
    }

    printf("%d ->", temp->data);
    printf("%d", start->data);
}

int main()
{
    start = NULL;
    int choise = 1;
    while (choise)
    {
        printf("Enter the value: ");
        int uservalue;
        scanf("%d", &uservalue);
        newNode = createNode(uservalue);
        if (start == NULL)
        {
            start = temp = newNode;
            temp->next = start;
            temp->prev = start;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
            newNode->next = start;
            start->prev = newNode;
        }
        printf("Press 1 to add new node or 0 to quit ");
        scanf("%d", &choise);
    }
    displayFunction();
    printf("\n backward reverse: \n");
    displayBackward();
    printf("\n Insertion at the end \n");
    insertionatEnd();
    displayFunction();
    printf("\n backward reverse: \n");
    displayBackward();

    return 0;
}