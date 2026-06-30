#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int countNode(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAt(Node *&head, int value, int position)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    Node *head = n1;
    insertAtBeginning(head, 45);
    insertAtEnd(head, 49);
    insertAt(head,99,2);
    printLinkedList(head);

    return 0;
}