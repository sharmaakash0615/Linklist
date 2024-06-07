#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class Linklist
{
    private:
    Node*head;
    public:
    Linklist()
    {
      head=NULL;
    }

    Node*takeinput()
    {
        int data;
        cin>>data;
        Node*head=NULL;
        Node*tail=NULL;
        
        while(data!=-1)
        {
          Node*newnode=new Node(data);
         
         if(head==NULL && tail==NULL)
         {
            head=newnode;
            tail=newnode;
         }
         else{
            tail->next=newnode;
            tail=tail->next;
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
    void addatEnd(Node*head,int data)
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
           temp =temp->next;
         }
         temp->next=newnode;
       }
     

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
   


};

int main()
{
     Linklist l;
     Node*head=l.takeinput();
     l.print(head);
     cout<<endl;
     Node*head1= l. addbeg(head,7);
   
    l.print(head1);
    cout<<endl;
                l.addatEnd(head1,11);
               l.addatEnd(head1,12);
    l.print(head1);
}