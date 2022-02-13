#include <bits/stdc++.h> 
using namespace std; 
unordered_map<int, int> hashMap;
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
void hashing(Node *head,unordered_map<int, int>& hashMap)
{
    Node *curr = head;
    while(curr->next != NULL)
    {
        if(hashMap.find(curr->data) != hashMap.end())
        {
            hashMap[curr->data] = hashMap[curr->data]+1;
        }
            
        hashMap[curr->data] = 1;
        curr = curr->next;
    }
}
Node* unions(unordered_map<int, int>& hashMap)
{
   Node *head = NULL;
   Node *curr = NULL;
   for(auto x : hashMap)
   {
        if(head == NULL)
        {
               Node *t = new Node(x.first);
               head = t;
               curr =t;
        }
        else{
            Node *t = new Node(x.first);
            curr->next = t;
            curr = curr->next;
        }
   }
   return head;
}
Node* intersection(unordered_map<int, int>& hashMap)
{
   Node *head = NULL;
   Node *curr = NULL;
   for(auto x : hashMap)
   {
       cout<<x.second;
       if(x.second > 1)
       {
           if(head == NULL)
            {
                Node *t = new Node(x.first);
                head = t;
                curr =t;
            }
            else{
                Node *t = new Node(x.first);
                curr->next = t;
                curr = curr->next;
            }
       }
   }
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



    Node *head1=new Node(10);
	head1->next=new Node(60);
	head1->next->next=new Node(70);
    head1->next->next->next = new Node(80);
    head1->next->next->next->next = new Node(90);
    head1->next->next->next->next->next = new Node(100);
    head1->next->next->next->next->next->next = new Node(110);
	//printlist(head);
    
    hashing(head,hashMap);

    hashing(head1,hashMap);
    Node *head2 = unions(hashMap);
    printlist(head2);
    cout<<"\n";
    Node *head3 = intersection(hashMap);
    printlist(head3);
	return 0;
} 


