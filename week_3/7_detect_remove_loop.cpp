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

void printlist( Node *head){
         Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

bool detect_loop( Node *head)
{
     Node *slow = head;
     Node *fast = head;
    while(fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
            return true;
    }
    return false;
    
}
 Node *remove( Node *head)
{
    Node *slow=head;
    Node *fast = head;
    // while(slow && fast && fast->next && slow != fast)
    // {
    //     slow = slow->next;
    //     fast = fast->next->next;
    //     cout<<slow->data<<"\n"<<fast->data<<"\n";
    // }
    // cout<<slow->data<<"\n"<<fast->data<<"\n";
    do{
        slow = slow->next;
        fast = fast->next->next;

    }while(slow != fast);
    fast = head;
   
    
    while (slow->next != fast->next)
    {

        slow = slow->next;
        fast = fast->next;
        /* code */
    }
    slow->next = NULL;
    return head;
    
}

int main() 
{ 

	struct Node* head = new Node(50);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
	// printlist(head);
    cout<<detect_loop(head)<<"\n";
    remove(head);
    printlist(head);
	return 0;
} 