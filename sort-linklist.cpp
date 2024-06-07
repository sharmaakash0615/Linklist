#include<bits/stdc++.h>
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

// Node* sortList(Node* head)
//  {
//   vector<int>ans;
//   Node*temp=head;
//   while(temp!=NULL) 
//   {
//    ans.push_back(temp->data); 
//    temp=temp->next;
//   }
//   int n=ans.size();
//  for(int i=1;i<n;i++) 
//  {
//    for(int j=0;j<n-i;j++) 
//    {
//     if(ans[j]>ans[j+1])
//     {
//         swap(ans[j+1],ans[j]);
//     }
//    }
//  } 
//  temp=head;
//  int i=0;
//  while(temp!=NULL)
//  {
//    temp->data=ans[i];
//    temp=temp->next;
//    i++;
//  }
//  return head;
// }

// optimal approche to sort the linklist
Node* middleNode(Node* head) {
        Node*a=head;
        Node*b=head->next;
        // int x=length(head);
        
    
      while(b!=NULL && b->next!=NULL)
        {

               b=b->next->next;
           
               a=a->next;
        }

        return a;
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
Node* sortList(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node*middl=middleNode(head);
    Node* lefthead=head;
    Node* righthead=middl->next;
    middl->next=NULL;
    lefthead=sortList(lefthead);
    righthead=sortList(righthead);

    return merge(lefthead,righthead);
    

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

    Node*head=sortList(t);
    print(head);
 }