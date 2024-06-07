#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
   int data;
   Node *next;
   Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
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

 

 vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
      Node*temp1=head;
      Node*temp2=head;
     vector<pair<int,int>>arr;
      while(temp2->next!=NULL)
      {
          temp2=temp2->next;
      }
      int i=0;
      while(temp1->next!=temp2 && temp1!=temp2)
      {
          if(temp1->data + temp2->data==target)
          {
            arr[i].first=temp1->data;
            arr[i].second=temp2->data;
             temp1=temp1->next;
             temp2=temp2->prev;
             i++;
          }
          else if(temp1->data+temp2->data > target)
          {
             temp2=temp2->prev;   
          }
          else{
              temp1=temp1->next;
              
          }
      }
      return arr;
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
     
    //  int x;
    //  cin>>x;
    //   Node**head=deleteAllOccurOfX(head1,x);
    //   print(head);
    cout<<endl;
    int target;
    cin>>target;
    vector<pair<int, int>> arr=findPairsWithGivenSum(head1,target);
    for(auto it:arr)
    {
        cout<<it.first<<" "<<it.second;
    }
     return 0;

}