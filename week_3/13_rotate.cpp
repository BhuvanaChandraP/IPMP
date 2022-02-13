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
Node *rotate(Node *head,int k)
{
    if(k == 0 )
        return head;
    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = head;
    curr = head;
    for(int i=0;i<k-1;i++)
    {
        curr = curr->next;
    }
    head = curr->next;
    curr->next = NULL;
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
    // head->next->next->next->next->next->next = new Node(70);
    int k = 4;
	printlist(head);
    head = rotate(head,k);
    cout<<"\n";
    printlist(head);
    
	return 0;
} 