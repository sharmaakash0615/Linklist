// i/p 1 2 3 4 5 6 
// k=3
// o/p 3 2 1 6 5 4
// i/p 1 2 3 4 5
// k=3
// o/p 3 2 1 5 4
// i/p 1 2 3 4 5 6 7
// k=3
// 3 2 1 6 5 4 7

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
Node*print(Node*head)
{
    Node*temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node*itretiveReverse(Node*head)
{
    Node*temp=head;
    Node*prev=NULL;
    Node*next=NULL;

    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
    return head;
}

Node*recursiveReverse(Node*temp,Node*prev)
{
    if(temp==NULL)
    {
        return prev;
    }
     Node* next=temp->next;
     temp->next=prev;
     return recursiveReverse(next,temp);
}
Node*Reversek(Node*head,int k)
{
    Node*temp= head;
    Node*next=NULL;
    Node*prev=NULL;
   int count=0;
    while(temp!=NULL && count<k )
    {
        next=temp->next;
        temp->next=prev;
          prev=temp;
          temp=next;
          count++;
    }
    if(next!=NULL)
    {

        Node*rest_head= Reversek(next, k);
        head->next=rest_head;
    }
     head=prev;
    return head;
}

Node*Reverseklast(Node*head,int k)
{
    Node*temp= head;
    Node*a= head;
    Node*next=NULL;
    Node*prev=NULL;
   int count1=1;
   while(temp!=NULL && count1<k)
   {
    temp=temp->next;
    count1++;
   }
   int count2=1;
   while(temp!=NULL && count2<k-1)
   {
    a=a->next;
    count2++;
   }
 int count3=0;
    while(temp!=NULL && count3<k )
    {
        next=temp->next;
        temp->next=prev;
          prev=temp;
          temp=next;
          count3++;
    }
    a->next=prev;
    // if(next!=NULL)
    // {

    //     Node*rest_head= Reversek(next, k);
    //     head->next=rest_head;
    // }

    return head;
}
Node*frontreverse(Node*head,int k)
{
    Node*temp=head;
    Node*prev=NULL;
    Node*next=NULL;

    int count=0;
    while(temp!=NULL && count<k)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        count++;
    }
    head->next=next;
    return prev;
}

int main()
{
Node*head=takeinput();
print(head);
cout<<endl;

// Node*head1=Reversek(head,3);
// print(head1);
// cout<<endl;

// Node*head2=Reverseklast(head,4);
// print(head2);
// cout<<endl;

// Node*head3=frontreverse(head, 3);
// print(head3);
// cout<<endl;

// Node*head4=itretiveReverse(head);
// print(head4);

Node*head5=recursiveReverse(head,NULL);
print(head5);
return 0;
}

