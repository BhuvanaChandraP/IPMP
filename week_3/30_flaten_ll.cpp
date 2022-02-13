#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node* right;
    Node(int x){
        data=x;
        next=NULL;
        right= NULL;
    }
};

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

Node* merge(Node *head1 ,Node *head2)
{
   
    Node *temp = new Node(0);
    Node *res = temp;
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data)
        {
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        }
        else{
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;
        }
    }
    if(head1) temp->next = head1;
    else temp->next = head2;

    return res->next;
   
}
Node* flaten(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
    head->right = flaten(head->right);
    head = merge(head,head->right);
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
    head->next->next->next->next->next->next = new Node(70);



     head->right=new Node(5);
	head->right->next=new Node(10);
	head->right->next->next=new Node(15);
    head->right->next->next->next = new Node(20);
    head->right->next->next->next->next = new Node(25);
    head->right->next->next->next->next->next = new Node(30);
    head->right->next->next->next->next->next->next = new Node(35);


     head->right->right=new Node(1);
	head->right->right->next=new Node(2);
	head->right->right->next->next=new Node(3);
    head->right->right->next->next->next = new Node(9);
    head->right->right->next->next->next->next = new Node(18);
    head->right->right->next->next->next->next->next = new Node(27);
    head->right->right->next->next->next->next->next->next = new Node(45);

    head->right->right->right=new Node(6);
	head->right->right->right->next=new Node(12);
	head->right->right->right->next->next=new Node(18);
    head->right->right->right->next->next->next = new Node(24);
    head->right->right->right->next->next->next->next = new Node(30);
    head->right->right->right->next->next->next->next->next = new Node(36);
    head->right->right->right->next->next->next->next->next->next = new Node(42);

    head->right->right->right->right=new Node(8);
	head->right->right->right->right->next=new Node(16);
	head->right->right->right->right->next->next=new Node(24);
    head->right->right->right->right->next->next->next = new Node(32);
    head->right->right->right->right->next->next->next->next = new Node(40);
    head->right->right->right->right->next->next->next->next->next = new Node(48);
    head->right->right->right->right->next->next->next->next->next->next = new Node(56);
    head = flaten(head);
    printlist(head);

    

	
	return 0;
} 