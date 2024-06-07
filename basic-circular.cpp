// #include<iostream>
// using namespace std;

// struct Node
// {
//   int data;
//   Node*next;
//   Node(int data)
//   {
//     this->data=data;
//     next=NULL;
//   }

// };

// int main()
// {
// Node*head=new Node(10);
// head->next=new Node(5);
// head->next->next=new Node(20);
// head->next->next->next=new Node(15);
// head->next->next->next->next=head;

// cout<<head->data<<" ";
// cout<<head->next->data<<" ";
// cout<<head->next->next->data<<" ";
// cout<<head->next->next->next->data<<" ";

// }


// method using print function

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
// print function using for loop
// void print(Node*head)
// {
    
//     if(head==NULL)
//     {
//       return;  
//     }
         
//        cout<<head->data<<" ";
//         Node*temp;
//         for(temp=head->next;temp!=head;temp=temp->next)
//         {
//             cout<<temp->data<<" ";
//         }

// }

// print function usin do while loop

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
Node*head=new Node(10);
head->next=new Node(5);
head->next->next=new Node(20);
head->next->next->next=new Node(15);
head->next->next->next->next=head;

print(head);

}
