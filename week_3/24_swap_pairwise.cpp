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

Node* swapPairwise(Node *head )
{
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
    
   
}


int main() 
{ 

	Node *head=new Node(20);
	head->next=new Node(1);
	head->next->next=new Node(7);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(17);
    head->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next = new Node(2);
    head = swapPairwise(head);
    printlist(head);
	return 0;
} 