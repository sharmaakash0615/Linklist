// a Node of the doubly linked list
#include<bits/stdc++.h>
using namespace std; 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; 

//Function to insert a new node at given position in doubly linked list.

Node*takeinput()
{
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    
    while(data!=-1)
    {
        Node*newnode=new Node(data);
       
       if(head==NULL && tail==NULL)
       {
        head=newnode;
        tail=newnode;
       }
       else{
        tail->next=newnode;
        tail=tail->next;
       }
        cin>>data;
    }
 return head;

}
Node* addNode(Node *head, int pos, int data)
{
  Node*temp=head;

  Node*newnode=new Node(data);
  
      int count=0;
      while(temp->next!=NULL && count<pos)
      {
          temp=temp->next;
          count++;
      }
       newnode->next=temp->next;
       temp->next=newnode;
       newnode->prev=temp;
       newnode->next->prev=newnode;
     
     
     
  
}
int middleNode(Node* head) {
        Node*a=head;
        Node*b=head;
        int x=
        while(b->next!=NULL)
        {

             b=b->next->next;
           
            a=a->next;
        }

        return a->data;
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
    Node*head=takeinput();
    print(head);
   cout<<endl;
   int x= middleNode(head);
   cout<<x;
//     int pos,data;
//     cout<<endl;
//     cin>>pos>>data;
//    Node*head1= addNode(head, pos, data);
//     print(head1);
}