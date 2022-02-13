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
Node *deleteNnodes(Node *head,int m,int n)
{
    Node *temp1 = head;
    Node *temp2 = NULL;
    int i=1;
    while(i<m)
    {
        i++;
        temp1 = temp1->next;
        // cout<<temp1->data<<"  ";
    }
    // cout<<"\n";
    temp2 = temp1->next;
    int j=0;
    while(j<n)
    {
        Node *tt = temp2;
        temp2 = temp2->next;
        free(tt);
        // cout<<temp1->data<<"  ";
        j++;
    }
    temp1->next = temp2;
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
    int m =2;
    int n =2;
    head = deleteNnodes(head,m,n);
    printlist(head);
	return 0;
} 