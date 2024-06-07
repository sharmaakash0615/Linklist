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

Node*merge(Node*head1,Node*head2)
    {
        
        Node*dummynode=new Node(-1);
        Node*temp=dummynode;
        while(head1!=NULL && head2!=NULL)
        {
        if(head1->data < head2->data)
        {
            temp->next=head1;
            temp=head1;
            head1=head1->next;
        }
        else
        {
            temp->next=head2;
            temp=head2;
            head2=head2->next;
        }
        }
        if(head1==NULL)
        {
            temp->next=head2;
        }
        else{
            temp->next=head1;
        }
        return dummynode->next;
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
     Node*head1=takeinput();
     print(head1);
     cout<<endl;
     Node*head2=takeinput();
     print(head2);
     cout<<endl;
     Node*head= merge(head1,head2);
     print(head);
     return 0;

}