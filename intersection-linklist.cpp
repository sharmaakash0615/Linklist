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
        count++;
    }
    return count;
}

int intersection(Node*head1,Node*head2)
{
    int d;
     Node*temp1=head1;
     Node*temp2=head2;

      int ln1=length(head1);
      int ln2=length(head2);
       if(ln1>ln2)
       {
        d=(ln1-ln2);
        for(int i=0;i<d;i++)
        {
            temp1=temp1->next;
        }
        while(temp1!=NULL && temp2!=NULL )
      {

       if(temp1->data==temp2->data)
        {
            return temp1->data;
            
        }
          
        
            temp1=temp1->next;
            temp2=temp2->next;
            
    }

       }
       else if(ln2>ln1)
       {
        d=(ln2-ln1);
        for(int i=0;i<d;i++)
        {
            temp2=temp2->next;
        }
        while(temp1!=NULL && temp2!=NULL )
      {

       
        if(temp1->data==temp2->data)
        {
            return temp1->data;
            
        }
          
        
            temp1=temp1->next;
            temp2=temp2->next;
            
       }

       }
     
   else{
     while(temp1!=NULL && temp2!=NULL )
     {

       
        if(temp1->data==temp2->data)
        {
            return temp1->data;
            
        }
          
        
            temp1=temp1->next;
            temp2=temp2->next;
            
     }    
        
     }

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
     cout<<"length is"<<length(head1);

    cout<<"intersection point is="<<intersection(head1,head2);
    return 0;
}