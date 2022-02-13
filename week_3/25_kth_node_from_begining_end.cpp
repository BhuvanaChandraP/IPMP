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
Node *swap(Node *head,int k)
{
    int n = countNodes(head);
    if(n <k)
        return head;
    if(2*k-1 == n)
        return head;
    Node *x = head;
    Node *x_prev = NULL;
    for(int i=1;i<k;i++)
    {
        x_prev = x;
        x = x->next;
    }

    Node *y = head;
    Node *y_prev = NULL;
    for(int i=1;i<n-k+1;i++)
    {
        y_prev = y;
        y = y->next;
    }

    if (x_prev)
        x_prev->next = y;
 
    if (y_prev)
        y_prev->next = x;
    
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;

    if(k == 1)
        head = y;
    if(k == n)
        head = x;
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
    int k =2;
    head = swap(head,k);
    printlist(head);
	return 0;
} 