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
Node *removes(Node *head)
{
    if(head == NULL)
        return NULL;
    Node *prev = head;
    Node *node = head->next;
    while(prev != NULL && node != NULL)
    {
        prev->next = node->next;
        prev = prev->next;
        if(prev != NULL)
            node = prev->next;
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
	printlist(head);
    head = removes(head);
    cout<<"\n";
    printlist(head);
    
	return 0;
} 