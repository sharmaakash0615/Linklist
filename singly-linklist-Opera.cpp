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
// Node*insertbeg(int data,Node*head)
//   {
//     Node*newnode=new Node(data);

//     if(head==NULL)
//     {
//         head=newnode;
       
//     }
//     else{
//         newnode->next=head;
//         head=newnode;
//     }

//     return head;
//   }

//   Node*insertend(int data,Node*head)
//   {
//     Node*temp=head;
//     Node*newnode=new Node(data);

//     if(head==NULL && temp==NULL)
//     {
//         head=newnode;
//         temp=newnode;
//     }
//     else{
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }

//     return head;

//   }

//   Node*removebeg(Node*head)
//   {

//        if(head==NULL)
//        {
//         cout<<" there is no element"<<endl;
//        }

//        else{
//           Node*temp=head;
//           head=head->next;
//           delete temp;
//        }

//        return head;
//   }
  
//   Node*removelast(Node*head)
//   {
//    Node*temp1=head;
//    Node*temp2=head->next;

//    if(head==NULL)
//        {
//         cout<<" there is no element"<<endl;
//        }

//        else{
//         while(temp2->next!=NULL)
//         {
//            temp2=temp2->next;
//            temp1=temp1->next;
//         }
//         delete temp2;
//         temp1->next=NULL;
//        }
//    return head;
//   }

// Node*insretgivenpos(Node*head,int data, int pos)
// {
//    Node*temp=head;
//    Node*newnode=new Node(data);
//     if(pos==1)
//     {
//         newnode->next=head;
//         head=newnode;
        
//     }
//      else{
//          int count=1;
//          while(temp->next!=NULL && count<pos-1)
//          {
//             temp=temp->next;
//             count++;
//          }
//            newnode->next=temp->next;
//             temp->next=newnode;
             
//      }

//     return head;
// }

// // delete at any pos

//   Node*deletepos(Node*head,int pos)
//   {
//     Node*temp=head;
//     if(pos==1)
//     {
//      delete temp;
//     }
//     else{
//         int count=1;
//         Node*a=temp->next;
//          while(a->next!=NULL && count<pos-1)
//          {
//                   temp=temp->next; 
//                   a=a->next;
//                   count++;
//          }
//          temp->next=a->next;
//          delete a;
//     }
//     return head;
//   }

// // searching of element itretively approch

// int search(Node*head,int x)
// {
//    Node*temp=head;
//     int count=1;
//      while(temp!=NULL)
//      {
//       if(x==temp->data)
//        {
//          return count;
//        }
//        count++;
      
//        temp=temp->next;
         
//      }
     
//  return -1;
     

// }

// Node*reverse(Node*head)
// {
//   Node*prev=NULL;
//   Node*next=NULL;
//   Node*temp=head;
//   while(temp!=NULL)
//   {
    
//     next=temp->next;
//     temp->next=prev;
//     prev=temp;
//     temp=next;
    
    
//   }
//   head=prev;
//    return head;
// }

int length(Node*head)
{
  Node*temp=head;
  int count=0;
  while(temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  return count;
  
}




// best soluton for middle node
// int middleNode(Node* head) {
//         Node*a=head;
//         Node*b=head;
//         // int x=length(head);
        
    
//       while(   b!=NULL && b->next!=NULL)
//         {

//                b=b->next->next;
           
//                a=a->next;
//         }

//         return a->data;
//     }
    



// int middleNode(Node* head)
// {
//    int x=length(head);
//    int middle=x/2+1;
//   int count=1;
//   Node*temp=head;
//    while(temp->next!=NULL && count<middle)
//    {
//     temp=temp->next;
//     count++;
//    }
//   return temp->data;
// }

//  it is not correct solution
    // bool isPalindrome(Node* head) {
    //   Node*next=NULL;
    //   Node*prev=NULL;
    //   Node*temp=head;
    //   while(temp!=NULL)  
    //   {
    //    next=temp->next;
    //    temp->next=prev;
    //    prev=temp;
    //    temp=next; 
    //   }
    //   Node*head1=prev;
    
    //  Node*temp1=head;
    //  Node*temp2=head1;
    //   while(temp1!=NULL && temp2!=NULL)
    //   {
    //     if(temp1->data==temp2->data)
    //     {
    //       temp1=temp1->next;
    //       temp2=temp2->next;
    //     }
    //     else{
    //       return false;
    //       break;
    //     }
        
    //   }
    //   return true;
    // } 

//  
    // Node* oddEvenList(Node* head) {
        
    //     if(head==NULL || head->next==NULL) return head;
        
    //     Node*slow=head->next;
    //     Node*fast=head;
    //     Node*a=slow;
    //     Node*b=fast;
    //   while(  slow!=NULL && slow->next!=NULL ) 
    //   {
    //         fast->next=slow->next;
    //         fast=slow->next;
    //         slow->next=fast->next;
    //         slow=fast->next;
    //   }
    //    fast->next=a;
     
    //    return b;
       
    // }

    Node*reverse(Node* head)
    {
    Node*prev=NULL;
        Node*next=NULL;
       Node*temp=head;

        while(temp!=NULL)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp->next;
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
     
        Node*temp=head1;
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
    // cout<<length(t);
    // cout<<endl;
    // int x= middleNode(t);
    //  cout<<x;
    
      // cout<<endl;
      // cout<<isPalindrome(t);
  //  Node*t2= isPalindrome(t);
  //   print(t2);

  //  Node*t3=oddEvenList(t);
  //  print(t3);
  int n;
  cin>>n;
 Node*t4=removeNthFromEnd(t,n);
 print(t4);
    
   // int data;

    //  insert at beg
    // cout<<"enter data for add at begg"<<endl;
    // cin>>data;
    // Node*head= insertbeg(data,t);
    // print(head);

    // add beggneeing method-1
      //   Node*head=NULL;
      //  Node*head1 =insertbeg(1,head);
      //  Node*head2 =insertbeg(2,head1);
      //  Node*head3=insertbeg(3,head2);
      //  Node*head4 =insertbeg(4,head3);
      //  print(head4);

//  insert at last
    // cout<<"enter data for adding last"<<endl;
    // cin>>data;
    // Node*head1=insertend(data,t);
    // print(head1);

    // Node*head2=removebeg(t);
    // print(head2);

    // Node*head3=removelast(t);
    //  print(head3);
     
    //  int pos;
    // cout<<"enter the data and postion  for adding anywhere"<<endl;
    // cin>>data>>pos;
    //  Node*head4=insretgivenpos(t,data,pos);
    //  print(head4);
    
    // int x;
    // cout<<"enter the data to be search "<<endl;
    // cin>>x;
    //  cout<<"postion of element is"<<search(t, x)<<endl;

    // recursive search
    //  int x;
    // cout<<"enter the data to be search "<<endl;
    // cin>>x;
    //  cout<<"postion of element is"<<Reacursivesearch(t, x)<<endl;
    //   return 0;


      //  int pos;
      //  cout<<"enter position"<<endl;
      //  cin>>pos;
      //  Node*head5= deletepos(t,pos);
      //  print(head5);
  
     // Node*head6=reverse(t);
      // print(head6);

    //  cout<<"length is="<<length(t)<<endl;
     

   
}



