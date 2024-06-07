
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node*prev;

    Node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }


};

Node*takeinput()
{
Node*head=NULL;
Node*temp=head;
int data;
cout<<"enter the data"<<endl;
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

Node*addbeg(Node*head,int data)
{
    Node*newnode=new Node(data);
   if(head==NULL)
   {
       head=newnode;
   }
   else{
        newnode->next=head;
        // newnode->prev=NULL;
        head=newnode;
   }

}

Node*addlast(Node*head,int data)
{
     Node*newnode=new Node(data);
     if(head==NULL)
     {
           head=newnode;
     }
     else{

        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
     newnode->prev=temp;
     }
     return head;
}
Node*removebeg(Node*head)
{

   Node*temp=head;
   head=head->next;
   head->prev=NULL;
   delete temp;
   return head;
}

Node*removelast(Node*head)
{
    Node*temp=head;
    Node*a=head->next;
    if(head==NULL)
    {
        cout<<"there is no element in the link list"<<endl;
        return NULL;
    }
      
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    while(a->next!=NULL)
    {
        temp=temp->next;
        a=a->next;
    
    }
  
 
    temp->next=NULL;
    delete a;
    return head;
}





Node*addatpos(Node*head,int pos,int data)
{
    Node*newnode=new Node(data);
  if(pos==1)
  {
   newnode->next=head;
   head=newnode;
  }
  else{
    int count =1;
    Node*temp=head;
    while(temp->next!=NULL && count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    // newnode->prev=temp;
    // newnode->next->prev=newnode;
  }
  return head;
}
// revese the linlist with naive aproch
// Node* reverseDLL(Node * head)
// {
//  stack<int> s;
//  Node*temp=head;
//  while(temp!=NULL)  
//  {
//     s.push(temp->data);
//      temp=temp->next;
//  }
//  temp=head;
//  while(temp!=NULL)
//  {
//     temp->data=s.top();
//     s.pop();
//     temp=temp->next;
//  }
//  return head;
// }
//  optimal approch isme ham sirg link change kar lahe hai
Node* reverseDLL(Node * head)
{
    Node*temp=head;
    Node*last=NULL;
    while(temp!=NULL)
    {
       last=temp->prev;
       temp->prev=temp->next;
       temp->next=last;
       temp=temp->prev;
    }
  head=temp->prev;
  return head; 
}

// Node*reverseDLL(Node*head)
// {
//     Node*next=NULL;
//     Node*prev=NULL;
//     Node*temp=head;
//     while(temp!=NULL)
//     {
//         next=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=next;
//     }
//     head=prev;
//     return head;
// }
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
 cout<<endl;
 Node*head5=reverseDLL(head);
  print(head5);


// int data;
// cout<<"enter the  data for adding"<<endl;
// cin>>data;
// Node*head1=addbeg(head, data);
// print(head1);
    

// int data;
// cout<<"enter the  data for adding"<<endl;
// cin>>data;
// Node*head2=addlast(head, data);
// print(head2);
 
//  int data,pos;
//  cout<<"enter the  data and postion for adding"<<endl;
//  cin>>data>>pos;
//   Node*head4= addatpos(head, pos,data);
//  print(head4);

//   Node*head3= removebeg(head);
//   print(head3);

//    Node*head4= removelast(head);
//    print(head4);

  


    return 0;
}