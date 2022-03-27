#include<iostream>
using namespace std;
#include"LL.cpp"

void print(Node *head)
{
    while(head != NULL){
    cout<<head -> data<<" "<<endl;
    head = head -> next;
    }
}
int main()
{
    // Statically Create Object
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    
    // connecting Node 
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);

    // cout<<n1.data<<" "<<n2.data<<endl;

    // Dynamically Create Object
    // Node *n3 = new Node(100);`
    // Node *head = &n3; 

    // Node *n4 = new Node(200);
    // // n3 -> next = n4;
    // return 0;
}