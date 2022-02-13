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
Node *reverse(Node *head)
{
    Node* current = head;
        Node *prev = NULL, *next = NULL;
  
        while (current != NULL) {
            // Store next
            next = current->next;
  
            // Reverse current node's pointer
            current->next = prev;
  
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
    head = prev;
    return head;
    // Node *temp = head;
    // Node *temp2 = head;
    // Node *temp3 = head;
    // temp->next = NULL;
    // temp = temp->next;
    // while(temp3 != NULL)
    // {
    //     temp->next = temp2;
    //     temp = temp->next;
    //     temp2 = temp2->next;
    //     temp3 = temp3->next;
    // }
    // temp->next = NULL;
    // return temp;
}
int main() 
{ 

	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
	printlist(head);
    cout<<"\n";
    head = reverse(head);
    printlist(head);
	return 0;
} 
