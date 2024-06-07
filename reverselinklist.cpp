#include<iostream>
using namespace std;
#include<vector>

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

// using auxilary array
// linklist -1->2->3
// copy to arry-1 2 3
// pop from array 3 2 1 
//  for this we use vector
//  it is not efficint method
Node*reverse(Node*head)
{
    
   
    vector<int>arr;
for(Node*temp=head;temp!=NULL;temp=temp->next)
{
    arr.push_back(temp->data);
}
for(Node*temp=head;temp!=NULL;temp=temp->next)
{
    temp->data=arr.back();
    arr.pop_back();
}
return head;
}

//  iterative reverse of linklist
Node*reverse1(Node*head)
{
    Node*prev=NULL;
    Node*temp=head;
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

// Node*head1=reverse(head);
// print(head1);

// Node*head2=reverse1(head);
// print(head2);

Node*head3=recursiveReverse(head,NULL);
print(head3);
return 0;
}