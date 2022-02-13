#include <bits/stdc++.h> 
using namespace std; 
struct Node* a;
struct Node* b;
struct Node{
    char data;
    Node* next;
    Node(char x){
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

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    a = head;
    b = head->next;
    
    if(head==NULL || head->next==NULL)
    return;
    
    
    struct Node* tail1 = a,*tail2= b;
    
    while(tail1 && tail2 && tail1->next && tail2->next!=NULL)
    {
        tail1->next = tail2->next;
        
        tail1 = tail1->next;
        
        tail2->next = tail1->next;
     
        tail2 = tail2->next;
    }
    
    tail1->next = NULL;
    
}


int main() 
{ 

	Node *head=new Node('a');
	head->next=new Node('b');
	head->next->next=new Node('z');
    head->next->next->next = new Node('o');
    head->next->next->next->next = new Node('u');
    head->next->next->next->next->next = new Node('x');
    head->next->next->next->next->next->next = new Node('e');
    alternatingSplitList(head);
    printlist(a);
    cout<<"\n";
    printlist(b);
	return 0;
} 