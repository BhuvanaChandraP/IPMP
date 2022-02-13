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

bool detect_loop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
            return true;
    }
    return false;
    
}


int main() 
{ 

	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(20);
    head->next->next->next->next->next = new Node(10);
    head->next->next->next->next = head;
	// printlist(head);
    cout<<detect_loop(head);
	return 0;
} 