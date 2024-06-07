#include<iostream>
using namespace std;

class Node
{
    public:
    Node*next;
    int data;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node*takeinput()
{
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    Node*head=NULL;
    Node*temp=head;

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
    int count=1;
    while(temp->next!=NULL)
    {
       temp=temp->next;
       count++;
    }
    return count;
}
int nthNodeFromEnd(Node*head,int n)
{

    int ln=length(head);
    int pos=ln-n+1;
     Node*temp=head;
     int count=1;
     if(n>ln)
     {
        return -1;
     }
     while(temp->next!=NULL && count<pos) 
     {
        temp=temp->next;
        count++;
     }
     return temp->data;
     
}
// method-2
//  using two pointer approch
int nthNodeFromEnd1(Node*head,int n)
{

  if(head==NULL)
  {
    return -1;
  }
  Node*first=head;
  Node*second=head;
  for(int i=0;i<n;i++)
  {
     first=first->next;
  }
  while(first!=NULL)
  {
    first=first->next;
    second=second->next;
  }
  
 return second->data; 
}

Node*print(Node*head)
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
    int n;
    cout<<"enter the vallue n"<<endl;
    cin>>n;
//    cout<<"data from end is="<<nthNodeFromEnd(head, n);

  cout<<"data from end is="<<nthNodeFromEnd1(head, n);

    return 0;
}