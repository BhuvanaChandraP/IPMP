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
int NthNodeFromLast(Node *head,int N)
{
    int n=0;
    Node *temp1 = head;
    Node *temp2 = head;
    while(n<N)
    {
        temp1 = temp1->next;
        n++;
    }
    while(temp1 != NULL)
    {
        temp2 = temp2->next;
        temp1 = temp1->next;
    }
    return temp2->data;
}

void printNthFromLast(struct Node* head, int n)
{
    int i = 0;
    if (head == NULL)
        return;
    printNthFromLast(head->next, n);
    if (++i == n)
        cout<<head->data;
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
    int N = 2;
    // int num = NthNodeFromLast(head,N);
    // cout<<"\n"<<num<<"\n";
    printNthFromLast(head,N);
	return 0;
} 
