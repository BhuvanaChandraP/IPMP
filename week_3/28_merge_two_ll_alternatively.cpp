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

Node* mergeTwoListAlernatively(Node *head1 ,Node *head2)
{
    Node *curr1;
    Node *curr2;
    Node *first = head1;
    Node *second = head2;
    while(head1 != NULL && head2 != NULL)
    {
        curr1 = head1->next;
        head1->next = head2;
        head1 = curr1;

        curr2 = head2->next;
        head2->next = head1;
        head2 = curr2;

    }
    return first;
   
}


int main() 
{ 

	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(4);
    head->next->next->next = new Node(3);
    
    Node *head1=new Node(9);
	head1->next=new Node(10);
	head1->next->next=new Node(9);
    head1->next->next->next = new Node(1);
    
   

    Node *head2 = mergeTwoListAlernatively(head,head1);
    printlist(head2);
	return 0;
} 