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

int length(Node*head)
{
  Node*temp=head;
  int count=0;
  while(temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  return count;
  
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
    cout<<length(head);
return 0;
}