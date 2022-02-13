#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

Node* merge(Node *head1 ,Node *head2)
{
   Node *curr1 = head1;
   Node *curr2 = head2;
   Node *head = NULL;
   Node *curr = NULL;
   while(curr1 && curr2)
   {
       if(curr1->data == curr2->data)
       {
           if(head == NULL)
           {
               Node *t = new Node(curr1->data);
               head = t;
               curr =t;
           }
           else{
               Node *t = new Node(curr1->data);
               curr->next = t;
               curr = curr->next;
           }
           curr1 =curr1->next;
           curr2 = curr2->next;
       }
       else{
           if(curr1->data < curr2->data)
           {
               if(head == NULL)
                {
                    Node *t = new Node(curr1->data);
                    head = t;
                    curr =t;
                }
                else{
                    Node *t = new Node(curr1->data);
                    curr->next = t;
                    curr = curr->next;
                }
               curr1 = curr1->next;
           }
                
            else
            {
                if(head == NULL)
                {
                    Node *t = new Node(curr2->data);
                    head = t;
                    curr =t;
                }
                else{
                    Node *t = new Node(curr2->data);
                    curr->next = t;
                    curr = curr->next;
                }
                curr2 = curr2->next;

            }
                
       }
   }
    while(curr1 == NULL && curr2 != NULL)
    {
        Node *t = new Node(curr2->data);
        curr->next = t;
        curr = curr->next;
                
        curr2 = curr2->next;
    }
    while(curr2 == NULL && curr1 != NULL){
        Node *t = new Node(curr1->data);
        curr->next = t;
        curr = curr->next;     
        curr1 = curr1->next;       
    }
   return head;
 
   
}


int main() 
{ 

	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);



    Node *head1=new Node(10);
	head1->next=new Node(60);
	head1->next->next=new Node(70);
    head1->next->next->next = new Node(80);
    head1->next->next->next->next = new Node(90);
    head1->next->next->next->next->next = new Node(100);
    head1->next->next->next->next->next->next = new Node(110);
	//printlist(head);
    Node *head2 = merge(head,head1);
    printlist(head2);
	return 0;
} 