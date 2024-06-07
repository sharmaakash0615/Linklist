#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node*insertbeg(Node*head,int data)
{
 Node*temp=new Node(data);
 
 if(head==NULL)
 {
  temp->next=temp;  
  return temp;   
 }
 else{
 Node*curr=head;   
  while(curr->next!=head)
  {
    curr=curr->next;
  }

   curr->next=temp;
   temp->next=head;
 }
  return temp;
}
Node*insertend(Node*head,int data)
{
 Node*temp=new Node(data);
 
 if(head==NULL)
 {
  temp->next=temp;  
 return temp;   
 }
 else{
 Node*curr=head;   
  while(curr->next!=head)
  {
    curr=curr->next;
  }

   curr->next=temp;
   temp->next=head;
 }
  return head;
}
int length(Node*head)
{
  Node*temp=head;
  int count=1;
  if(head==NULL)
  {
    cout<<"length is zer0"<<endl;

  }
  else{
   
    while(temp->next!=head)
    {
      temp=temp->next;
      count++;
    }
  }
    return count;
}

Node*removebeg(Node*head)
{
  if(head==NULL)
  {
    cout<<"there is no element"<<endl;
  }
  else{
    Node*temp=head;
    Node*tail=head;
    while(temp->next!=head)
    {
      temp=temp->next;
    }
   head=head->next;
   delete tail;
   temp->next=head;
  }
  return head;
}

// effiecient solution

// Node*removebeg1(Node*head)
// {
  
//   if(head==NULL)
//   {
//    cout<<"there is no element "<<endl;
//   }
//   else
//   {
//   head->data=head->next->data;
//   Node*temp=head->next;
//   head->next=head->next->next;
//   delete temp;
//   }
//   return head;
// }
// Node*removelast(Node*head)
// {
//   if(head==NULL)
//   {
//     cout<<"there is no element"<<endl;
//   }
//   else{
//     Node*temp=head;
//     Node*tail=head;
//     while(temp->next!=head)
//     {
//       temp=temp->next;
//     }
//    head=head->next;
//    delete tail;
//    temp->next=head;
//   }
//   return head;
// }
Node*removelast(Node*head)
{
  if(head==NULL)
  {
    cout<<"there is no element"<<endl;
  }
  else{
    Node*temp=head->next;
    Node*tail=head;
    
    while(temp->next!=head)
    {

      temp=temp->next;
      tail=tail->next;
    }
   
   delete temp;
   tail->next=head;
  }
  return head;
}

Node*removepos(Node*head,int pos)
{
  int ln=length(head);
  Node*temp=head;
  Node*tail=head;
  Node*a=head->next;
  if(pos==1)
  {
    while(temp->next!=head)
    {
      temp=temp->next;
    }
    head=head->next;
    delete tail;
    temp->next=head;
  }
  else if(pos==ln)
  {
    while(a->next!=head)
    {
      a=a->next;
      temp=temp->next;
    }
    delete a;
    temp->next=head;
  }
  else{
    int count=1;
    while(a->next!=head && pos!=ln && count<pos-1)
    {
      a=a->next;
      temp=temp->next;
      count++;
    }
    temp->next=a->next;
    delete a;

  }
  return head;
}
    
// method-2 for remove pos
// ye pura sahi nahi hai
// Node*removepos1(Node*head,int pos)
// {
//   // if(head==NULL)
//   // {
//   //   return head;
//   // }
//   if(pos==1)
//   {

//    return removebeg1(head);
//   }
  
//   Node*temp;
//   for(int i=0;i<pos-2;i++)
//   {
//     temp=temp->next;
//   }
//   Node*tail=temp->next;
//   temp->next=temp->next->next;
//   delete tail;
  
// return head;
// }


void print(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    Node*temp=head;
    do{   
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}

int main()
{ 
    Node*head=NULL;
    Node*head1=insertbeg(head,1);
    Node*head2=insertbeg(head1,2);
    Node*head3=insertbeg(head2,3);
    Node*head4=insertbeg(head3,4);

    print(head4);
    // // cout<<endl;
    // Node*head5=insertend(head,1);
    // Node*head6=insertend(head5,2);
    // Node*head7=insertend(head6,3);
    // Node*head8=insertend(head7,4);
    //   print(head8);
      // cout<<endl;
      // cout<<"length is="<<length(head8)<<endl;

    // cout<<"delete the 1st node which is insert in beggining"<<endl;
    // Node*head9= removebeg(head4);
    //  print(head9);
    //  cout<<endl;

      // cout<<"efficient solution for remove beg"<<endl;
      // Node*t1=removebeg1(head4);
      // print(t1);
      // cout<<endl;

    //  cout<<"delete the first node  which isinsert at last "<<endl;
    //  Node*head10= removebeg(head8);

    //   print(head10);
    //   cout<<endl;
     

    cout<<"remove from last from aad beg linklist"<<endl;
     Node*head11= removelast(head1);
     print(head11);
     cout<<endl;

  //  int pos;
  //  cout<<"enter the postion"<<endl;
  //  cin>>pos;
    // Node*t2=removepos(head5,pos);
    // print(t2);
    // cout<<endl;

    // Node*t3=removepos1(head5,pos);
    // print(t3);
    // cout<<endl;


    




        return 0;

}
