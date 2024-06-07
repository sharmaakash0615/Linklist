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

 Node*reverse(Node*head)
    {
    Node*next=NULL;
    Node*prev=NULL;
    Node*temp=head;
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
    Node* removeNthFromEnd(Node* head, int n) {
         
         if(head==NULL) return NULL;
         if(head->next==NULL)
         {
            delete head;
            return NULL; 
         }
      Node*head1=reverse(head);

      
       if(n==1)
       {
        Node*b=head1;
        head1=head1->next;
        delete b;
        }
       else{
          int count =1;
     
        Node*temp=head1->next;
        Node*a=head1;
       while(temp->next!=NULL && count<n-1)
       {
        temp=temp->next;
        a=a->next;
       }
        a->next=temp->next;
        delete temp;
       }
        
        Node*head2=reverse(head1);

        return head2;
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
    // Node*t2=reverse(t);
    // print(t2);
    // cout<<endl;
     Node*t1=removeNthFromEnd(t,2);
     print(t1);
 }