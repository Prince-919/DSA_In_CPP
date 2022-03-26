#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this -> data;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
     
     Node *n1 = new Node(10);
     Node *n2 = new Node(20);
     Node *n3 = new Node(20);
     Node *n4 = new Node(20);
     n1 -> next = n2;
     n2 -> next = n3;
     n3 -> next = n4;
     print(n2);
}