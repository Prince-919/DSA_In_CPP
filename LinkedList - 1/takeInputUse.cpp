#include<iostream>
using namespace std;
#include"takeInput.cpp"

Node* takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    if(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head)
{
    if(head != NULL)
    {
        cout<<head -> data<<" ";
        head = head -> next;
    }
}
int main()
{
    Node *head = takeInput();
    print(head);
    return 0;
}