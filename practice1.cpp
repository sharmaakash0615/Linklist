#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
  Node(int data)
  {
    this->data=data;
    next=NULL;
  }
};

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
   Node*head =takeinput();
   print(head);
}