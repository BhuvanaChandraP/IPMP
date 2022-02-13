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

Node* Sum(Node *head1 ,Node *head2)
{
  Node *dummy = new Node(0);
  Node *temp = dummy;
  int carry =0;
  while(head2 != NULL || head1 != NULL || carry)
  {
      int sum =0;
      if(head1 != NULL)
      {
          sum += head1->data;
          head1 = head1->next;
      }
      if(head2 != NULL)
      {
          sum += head2->data;
          head2 = head2->next;
      }
      sum += carry;
      carry = sum/10;
      Node *node = new Node(sum%10);
      temp->next = node;
      temp = temp->next;
  }
  return dummy->next;
   
}


int main() 
{ 

	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(4);
    head->next->next->next = new Node(3);
    
    Node *head1=new Node(2);
	head1->next=new Node(4);
	head1->next->next=new Node(9);
    head1->next->next->next = new Node(1);
    
   

    Node *head2 = Sum(head,head1);
    printlist(head2);
	return 0;
} 