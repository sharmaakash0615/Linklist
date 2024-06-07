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

Node*takeinput()
{
    int data;
    Node*head=NULL;
    Node*temp=head;
    cout<<"enter the data";
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
        temp=temp->next;
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
    head=newnode;
   }
   return head;
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
      temp=newnode;
    }
    return head;
}
Node*addpos(Node*head,int data,int pos)
{
  Node*newnode=new Node(data);
  if(head==NULL)
  {
    head=newnode;
    
  }
  if(pos==1)
  {
    newnode->next=head;
    head=newnode;
    
  }
   else{
    Node*temp=head;
    int count=1;
    while(temp->next!=NULL && count<pos-1 )
    {
        temp=temp->next;
        count++;

    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;

   }
   return head;
}

Node*removebeg(Node*head)
{
    if(head==NULL)
    {
        cout<<"there is no element in linklist"<<endl;
    }
    else{
         Node*temp=head;
         head=head->next;
         delete temp;

    }
    return head;
}
Node*removelast(Node*head)
{
   if(head==NULL)
    {
        cout<<"there is no element in linklist"<<endl;
    } 
    else{
      Node*temp=head;
      Node*a=head->next;
        while(a->next!=NULL)
        {
            a=a->next;
            temp=temp->next;
        }

        delete a;
        temp->next=NULL;
    }
    return head;
}

Node*removepos(Node*head,int pos)
{
    Node*temp=head;
 if(pos==1)
 {
     head=head->next;
     delete temp;
 }
 else{
    Node*a=head->next;
    int count =1;
   while(a->next!=NULL && count<pos-1 )
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

int length(Node*head)
{
     Node*temp=head;
     int len=0;
     while(temp!=NULL) 
     {
        temp=temp->next;
        len++;
     }
     return len;
}
 Node*addmiddle(Node*head,int data)
 {
  Node*newnode=new Node(data);

    Node*temp=head;
    Node*a=head->next;
     int len= length(head);
     int count=1;
     if(len%2==0)
     {
         int pos=len/2;
    cout<<"midle is="<<len/2<<" "<<(len/2)+1<<endl;

    cout<<"enter your choice"<<endl;
    cout<<"1:before"<<len/2<<endl;
    cout<<"2:after"<<len/2<<endl;
    cout<<"3:after"<<len/2+1<<endl;
    int n;

    cin>>n;
    switch(n)
    {
      
      case 1:

     
      while(temp->next!=NULL && count<pos-1)
    {
        temp=temp->next;
       
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
       break;
    case 2:

      
      while(a->next!=NULL && count<pos)
    {
        temp=temp->next;
       
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
      break;

    case 3:

      
      while(a->next!=NULL && count<(pos+1))
    {
        temp=temp->next;
        
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
     break;

 }

 }
 else{
    int pos=(len+1)/2;
    cout<<"midle is="<<(len+1)/2<<endl;

    cout<<"enter your choice"<<endl;
    cout<<"1:before"<<(len+1)/2<<endl;
    cout<<"2:after"<<(len+1)/2<<endl;
   
    int n;

    cin>>n;
    switch(n)
    {
  
   case 1:

     
      while(temp->next!=NULL && count<pos-1)
    {
        temp=temp->next;
       
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
       break;
    case 2:

      
      while(a->next!=NULL && count<pos)
    {
        temp=temp->next;
       
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
      break;
    }

 }
 return head;
 }
 
 
void Searchmiddle(Node*head)
{
    Node*temp=head;
    int len=length(head);
    int count=1;
   
 
 if(len%2==0)
 {
    int pos=len/2;
    while(temp->next!=NULL && count<pos)
    {
        temp=temp->next;
        count++;
    }
      cout<<temp->data<<" ";
      cout<<temp->next->data<<" ";
 }
 else{
     int pos=(len+1)/2;
    while(temp->next!=NULL && count<pos)
    {
        temp=temp->next;
        count++;
    }
      cout<<temp->data<<" "; 
 }


}

Node*reverse(Node*head)
{
  Node*prev=NULL;
  Node*next=NULL;
  Node*temp=head;

 while(temp!=NULL)
 {
 next=temp->next;
 temp->next=prev;
 prev=temp;
 temp=next;
 }

 head=prev;

}

void display(Node*head)
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
 display(head);
 int data;
//  cout<<"eneter the data"<<endl;
//  cin>>data;
//  Node*head1=addbeg(head,data);
//  display(head1);

//  Node*head2=addlast(head, data);
//   display(head2);

//  int pos;
//  cout<<"enter pos"<<endl;
// cin>>pos;
// Node*head3=addpos(head,data, pos);
// display(head3);

//   Node*head4=removebeg(head);
//   display(head4);

// Node*head5=removelast(head);
// display(head5);

//  int pos;
//   cout<<"enter pos"<<endl;
//   cin>>pos;

// Node*head6=removepos(head,pos);
// display(head6);

// cout<<"lenght is="<<length(head);
cout<<endl;
// cout<<"middle element is"<<endl;
//   Searchmiddle(head);

// cout<<"enter data"<<endl;
// cin>>data;
// Node*head7=addmiddle(head, data);
// display(head);

Node*head8=reverse(head);
display(head8);

 return 0;

}
