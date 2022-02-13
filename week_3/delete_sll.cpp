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

void deletes(Node *head)
{
    Node* current = head;
    Node* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
 
   
    head = NULL;
    // Node *temp = head;
    // while(temp->next != NULL)
    // {
    //     temp = temp->next;
    //     free temp;
    // }
}


int main() 
{ 

	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(20);
    head->next->next->next->next->next = new Node(10);
	printlist(head);
    deletes(head);
    printlist(head);
	return 0;
} 