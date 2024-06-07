// 1 3 5 7 9
// add 6
// op-1 3 5 6 7 9

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
Node*insertsorted(Node*head,int data)
{
    Node*newnode=new Node(data);
    Node*temp=head;
    if(head==NULL)
    {
       head=newnode;
    }
    
    
      if(head->data>data )
      {
        newnode->next=head;
        head=newnode;
        return head;
      }
      
        
        while(temp->next!=NULL)
        {
         if(temp->data<data && temp->next->data>data)
       {
               newnode->next=temp->next;
               temp->next=newnode;
            
               temp=temp->next;
       }
        temp=temp->next;
        if(temp->next==NULL && temp->data<data)
        {
            temp->next=newnode;
            newnode->next=NULL;
        }
             
        
           
           
    }
    return head;
}

// method-2
Node*insertsorted1(Node*head,int data)
{
    Node*newnode=new Node(data);
    Node*temp=head;
    if(head==NULL)
    {
       head=newnode;
       return head;
    }
    
    
      if(head->data>data)
      {
        newnode->next=head;
        head=newnode;
        return head;
      }
      
        
        while(temp->next!=NULL && temp->next->data<data)
        {
         temp=temp->next;
        }

               newnode->next=temp->next;
               temp->next=newnode;
            
  return head;
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

int data;
cout<<"enter the data"<<endl;
cin>>data;
Node*head1=insertsorted(head, data);
 print(head1);

// Node*head2=insertsorted1(head, data);
// print(head2);
  return 0;
}