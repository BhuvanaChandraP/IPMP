#include<bits/stdc++.h>
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

int getIntesectionNode(Node *head1 ,Node *head2)
{
    if(head1 == NULL || head2 == NULL)
        return INT_MIN;
    Node *a = head1;
    Node *b = head2;
    while( a != b)
    {
        a = a == NULL ? head2 :a->next;
        b = b == NULL ? head1 :b->next;
    }
    return a->data;
}

// Driver Code
int main()
{
    /*
        Create two linked lists
     
        1st 3->6->9->15->30
        2nd 10->15->30
     
        15 is the intersection point
    */
 
    Node* newNode;
 
    // Addition of new nodes
    Node* head1 = new Node(10);
    head1->data = 10;
 
    Node* head2 = new Node(3);
    head2->data = 3;
 
    newNode = new Node(6);
    newNode->data = 6;
    head2->next = newNode;
 
    newNode = new Node(9);
    newNode->data = 9;
    head2->next->next = newNode;
 
    newNode = new Node(15);
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
 
    newNode = new Node(30);
    newNode->data = 30;
    head1->next->next = newNode;
 
    head1->next->next->next = NULL;
 
    cout << "The node of intersection is " << getIntesectionNode(head1, head2);
}