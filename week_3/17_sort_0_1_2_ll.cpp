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

Node* sort(Node *head )
{
  int count[3] = {0,0,0};
  Node *ptr = head;
  while(ptr != NULL)
  {
    count[ptr->data]++;
    ptr = ptr->next;
  }
  int i=0;
  ptr = head;
  while(ptr != NULL)
  {
    if(count[i] == 0)
       ++i;
    else{
        ptr->data = i;
        --count[i];
        ptr = ptr->next;
    }
    
  }
  return head;
   
}


int main() 
{ 

	Node *head=new Node(2);
	head->next=new Node(1);
	head->next->next=new Node(0);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(0);



    
    head = sort(head);
    printlist(head);
	return 0;
} 