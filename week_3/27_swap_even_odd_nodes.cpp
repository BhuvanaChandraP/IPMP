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
int countNodes(Node *head)
{
    int count =0;
    while(head )
    {
        count++;
        head = head->next;

    }
    return count;
}
Node *swap(Node *head)
{
    if(!head)
        return head;
    Node *odd = head;
    Node *even = head->next;
    Node *odd_head = head;
    Node *even_head = head->next;
    while(even && even->next)
    {
        odd->next = odd->next->next;
        even->next= even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = even_head;
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
    head = swap(head);
    printlist(head);
	return 0;
} 