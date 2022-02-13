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

long long product(Node *head1 ,Node *head2)
{
    long long N = 1000000007;
    long long num1 =0,num2=0;
    while(head1 || head2)
    {
        if(head1)
        {
            num1 = (num1*10)%N + head1->data;
            head1 = head1->next;
        }
        if(head2)
        {
            num2 = (num2*10)%N + head2->data;
            head2 = head2->next;
        }
    }
    return (num1%N)*(num2%N);
   
}


int main() 
{ 

	Node *head=new Node(1);
	head->next=new Node(0);
	head->next->next=new Node(0);
    head->next->next->next = new Node(0);
    
    Node *head1=new Node(2);
	head1->next=new Node(4);
	head1->next->next=new Node(9);
    head1->next->next->next = new Node(1);
    
   

   cout<<product(head,head1);
   // printlist(head2);
	return 0;
} 


if (head == NULL || head->next == NULL)
        return head;
  
    Node* prev = head;
    Node* curr = head->next;
  
    head = curr; 
    while (true) {
        Node* next = curr->next;
        curr->next = prev; 
        if (next == NULL || next->next == NULL) {
            prev->next = next;
            break;
        }
        prev->next = next->next;
        prev = next;
        curr = prev->next;
    }
    return head;