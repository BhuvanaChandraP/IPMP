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

Node* segregate(Node *head )
{

    Node *evenStart = NULL;
    Node *evenEnd = NULL;
    Node *oddStart = NULL;
    Node *oddEnd = NULL;
    Node *currNode = head;
     
    while(currNode != NULL){
        int val = currNode -> data;
        if(val % 2 == 0) {
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






//   Node *evenList=NULL ;
//   Node *oddList=NULL;
//   Node *evenHead=NULL;
//   Node *oddHead=NULL;
//   Node *evenEnd=NULL;
//   Node *curr = head;
//   while(curr != NULL)
//   {
//       if(curr->data % 2 == 0)
//       {
//           if(evenHead == NULL)
//           {
//               evenHead = curr;
//               evenList = curr;
//               evenList
//           }
//           evenList->next = curr;
//           evenList = evenList->next;
//           evenEnd = evenList;

//       }
//       else{
//           if(oddHead == NULL)
//           {
//               oddHead = curr;
//               oddList = curr;
//           }
//           oddList->next = curr;
//       }
//       curr = curr->next;
//   }
//   if(evenList )
//   {
//       evenList->next = oddHead;
//       return evenHead;
//   }
//   return oddHead;


   
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
    head = segregate(head);
    printlist(head);
	return 0;
} 