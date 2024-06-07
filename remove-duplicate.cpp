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
Node*removeDuplicate(Node*head)
{
    Node*temp=head;
    while( temp!=NULL && temp->next!=NULL)
    {
      
       if(temp->data==temp->next->data)
       {  
           Node*t1=temp->next;
           temp->next=temp->next->next;
          delete t1;
         
        }
        
        else{
       temp=temp->next;
        }
    }
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
Node*head1=removeDuplicate(head);
print(head1);


return 0;
}