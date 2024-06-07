#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
    Node*prev;

    Node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }


};

Node*addbeg(Node*head,int data)
{
Node*newnode=new Node(data);
 if(head==NULL)
 {
   head=newnode; 
 }
 newnode->next=head;
 newnode->prev=NULL;
 head=newnode;

 return head;
}
void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

int main()
{
  Node*head=NULL;
  head=addbeg(head,1);
  head=addbeg(head,2);
   head=addbeg(head,3);
   print(head);
  


    return 0;
}