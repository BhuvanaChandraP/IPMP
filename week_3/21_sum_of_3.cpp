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

bool findSum(Node *head1 ,Node *head2, Node *head3,int val)
{
   Node *node2 = head2;
   Node *node3 = head3;
   while(head1 != NULL)
   {
       while(head2 != NULL && head3 != NULL)
       {
            int s = head1->data + head2->data + head3->data;
            if(s == val)
            {
                cout<< head1->data<<" "<<head2->data<<" "<<head3->data<<"\n";
                return true;
               
            }
                
            else if(s >val)
            {
                head3 = head3->next;

            }
            else{
                head2 = head2->next;
            }
            
       }
        head1 = head1->next;
        head2 = node2;
        head3 = node3;
   }
   return false;
   
}


int main() 
{ 

	Node *head=new Node(10);
	head->next=new Node(15);
	head->next->next=new Node(4);
    head->next->next->next = new Node(20);
    
    Node *head1=new Node(2);
	head1->next=new Node(4);
	head1->next->next=new Node(9);
    head1->next->next->next = new Node(10);
    
    Node *head2=new Node(8);
	head2->next=new Node(4);
	head2->next->next=new Node(2);
    head2->next->next->next = new Node(1);

	int val = 25;
    cout<<findSum(head,head1,head2,val);

	return 0;
} 