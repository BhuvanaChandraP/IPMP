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
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
bool checkPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *temp = head;
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = reverse(slow->next);
    while(slow->next != NULL)
    {
        if(temp->data != slow->data)
            return false;
        temp = temp->next;
        slow = slow->next;
    }
    return true;
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
    cout<<"\n"<<checkPalindrome(head);
	return 0;
} 