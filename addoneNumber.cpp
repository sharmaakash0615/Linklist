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

Node*takeinput()
{
  int data;
  Node*head=NULL;
  Node*temp=head;
 
  cout<<"enter data"<<endl;
  cin>>data;
  

  while(data!=-1)
  {
    Node*newnode=new Node(data);
    if(head==NULL && temp==NULL)
    {
        head=newnode;
        temp=newnode;

    }
    else{
        temp->next=newnode;
         temp=newnode;
    }

    cin>>data;
  }
   return head;
}



Node* addOne(Node *head) 
    {
     
      Node*temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->data=temp->data+1;
      
      
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
    
    Node*t=takeinput();
    print(t);
    cout<<endl;
   Node*t1= addOne(t);
    print(t1);
 }