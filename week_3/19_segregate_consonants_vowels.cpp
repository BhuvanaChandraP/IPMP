#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    char data;
    Node* next;
    Node(char x){
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

Node* segregate(Node *head )
{

    Node *evenStart = NULL;
    Node *evenEnd = NULL;
    Node *oddStart = NULL;
    Node *oddEnd = NULL;
    Node *currNode = head;
     
    while(currNode != NULL){
        char val = currNode -> data;
        if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u') {
            if(evenStart == NULL){
                evenStart = currNode;
                evenEnd = evenStart;
            }
             
            else{
                evenEnd -> next = currNode;
                evenEnd = evenEnd -> next;
            }
        }   
        else{
            if(oddStart == NULL){
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else{
                oddEnd -> next = currNode;
                oddEnd = oddEnd -> next;
            }
        }   
        currNode = currNode -> next;   
    } 
    if(oddStart == NULL || evenStart == NULL){
        return NULL;
    }
    evenEnd -> next = oddStart;
    oddEnd -> next = NULL;
     
   
    head = evenStart;

    return head;

}


int main() 
{ 

	Node *head=new Node('a');
	head->next=new Node('b');
	head->next->next=new Node('z');
    head->next->next->next = new Node('o');
    head->next->next->next->next = new Node('u');
    head->next->next->next->next->next = new Node('x');
    head->next->next->next->next->next->next = new Node('e');
    head = segregate(head);
    printlist(head);
	return 0;
} 