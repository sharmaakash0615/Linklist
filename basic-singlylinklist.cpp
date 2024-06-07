// #include<iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node*next;

//     Node(int data)
//     {
//         this->data=data;
//         next=NULL;
//     }


// };

// int main()
// {
//     Node*head=new Node(10);
//     Node*temp1=new Node(20);
//      Node*temp2=new Node(30);
//      head->next=temp1;
//      temp1->next=temp2;
//      cout<<head->data<<" ";   
//      cout<<temp1->data<<" ";
//       cout<<temp2->data<<" ";



//      return 0;

   
// }



// method-2 general traversal

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
    Node*head=new Node(10);
    head->next=new Node(20);
     head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    print(head);
    // print(head);
     
       return 0;
   
}

