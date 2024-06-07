#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }


};


void detectLoop(Node*head)
{
    Node*temp=head;
    Node*a=head;
    while()
    if(temp==NULL)
    {
        cout<<"no loop"<<endl;
    }
     else{
        cout<<"loop is exist"<<endl;
     }

   
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    // head->next->next->next->next->next=head->next->next;
    cout<<head->data<<" ";
    cout<<head->next->data<<" ";
    cout<<head->next->next->data<<" ";
    cout<<head->next->next->next->data<<" ";
   cout<<head->next->next->next->next->data<<" ";
cout<<endl;
detectLoop(head);
    return 0;
}