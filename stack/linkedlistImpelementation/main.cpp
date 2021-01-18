#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *Top = NULL;

void display();
void Push(int);
int Pop();
bool isEmpty();
int Peek();

int main()
{
    Push(5);
    Push(9);
    Push(14);
    display();
    Pop();
    display();
    cout << "Top = " << Peek() << endl;
    display();
    cout << isEmpty() << endl;
    return 0;
}

bool isEmpty()
{
    return Top == NULL;
}

void display()
{
    node *currentNode;
    if (isEmpty()) cout << "Stack is empty" << endl;
    else
    {
        currentNode = Top;
        while (currentNode != NULL)
        {
            cout << currentNode->data << '\n';
            currentNode = currentNode->next;
        }
    }
    cout << endl;
}

void Push(int value)
{
    node *newNode;
    newNode = new node;
    newNode->data = value;
    newNode->next = Top;
    Top = newNode;
}

int Pop()
{
    int value;
    if (isEmpty()) 
    {
        cout << "Stack list is empty" << endl;
        return -1;
    }
    else
    {
        node *temp;
        temp = Top;
        Top = Top->next;
        value = temp->data;
        delete temp;
        return value;
    }
}

int Peek()
{
    if (isEmpty)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else return Top->data;
}