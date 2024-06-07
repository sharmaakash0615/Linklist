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

