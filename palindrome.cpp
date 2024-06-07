#include<iostream>
using namespace std;
#include<stack>

struct Node
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


void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// method -1 naive approch
// bool isPalindrome(Node*head)
// {
//     stack<char>st;
    
//      for(Node*temp=head;temp!=NULL;temp=temp->next)
//      {
//            st.push(temp->data);
//      }

//      for(Node*temp=head;temp!=NULL;temp=temp->next)
//      {
//            if(st.top()!=temp->data)
//            {
//             cout<<"it is not palindrome"<<endl;
//             return false;
//            }
//             st.pop();

            
//          cout<<"it is  palindrome"<<endl;  
//         return true;
//      }
     
     
// }
int length(Node*head)
{
   Node*temp=head; 
   int count=0;
   while(temp!=NULL)
   {
    count++;
    temp=temp->next;
   }

   return count;
}



 Node*isPalindrome1(Node*head)
 {
   int ln=length(head);
   int pos=(ln/2)+1;
    Node*temp=head;
    Node*next=NULL;
    Node*prev=NULL;
    Node*a=head;

    int count1=1;
     while(temp!=NULL && count1<pos)
    {
       temp=temp->next;
       count1++;
    }
    int count2 =1;
    while(temp!=NULL && count1<pos-1)
    {
       a=a->next;
       count2++;
    }

    
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        
    }
    a->next=prev;

    return head;
       
 }

int main()
{
    Node*head=takeinput();
    print(head);
    cout<<endl;

    Node*head1=isPalindrome1(head);
    print(head1);
    cout<<endl;

    




    return 0;
}