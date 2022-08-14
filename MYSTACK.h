#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

class Stack
{
    Node* head;
    Node* top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    //PUSH
    void push(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    //POP
    int pop()
    {
        Node* delNode;
        delNode = top;
        int chk = -1;

        if(head == NULL) // There is no element in the Stack
            cout << "Stack Underflow" << endl;

        if(top == head) // There is only 1 element
            head = top = NULL;
        else // There is More than 1 element
        {
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->val;
        delete delNode;
        count--;
        return chk;
    }
    //EMPTY
    bool empty()
    {
        if(head == NULL)
            return true;
        return false;
    }
    //SIZE
    int size()
    {
        return count;
    }
    //TOP
    int Top()
    {
        int chk = -1
        if(top == NULL)
            cout << "Stack Underflow | There is no Element in Top " << endl;
        else
            chk = top->val;
        return chk;
    }
};

