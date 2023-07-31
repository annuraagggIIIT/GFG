//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


//Function to sort the given doubly linked list using Merge Sort.
Node* mid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* merge(Node* left,Node* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        Node* ans=new Node(-1);
        Node* temp=ans;
        
        while(left!=NULL && right!=NULL){
            if(left->data<right->data){
                temp->next=left;
                left->prev=temp;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                right->prev=temp;
                temp=right;
                right=right->next;
            }
        }
        
        while(left!=NULL){
            temp->next=left;
            left->prev=temp;
            temp=left;
            left=left->next;
        }
        
        while(right!=NULL){
            temp->next=right;
            right->prev=temp;
            temp=right;
            right=right->next;
        }
        ans=ans->next;
        ans->prev=NULL;
        return ans;
    }
    
struct Node *sortDoubly(struct Node *head)
{
    // Your code here
    if(head==NULL || head->next==NULL){
            return head;
        }
        //break ll
        Node* middle=mid(head);
        
        Node* left=head;
        Node* right=middle->next;
        middle->next=NULL;
        right->prev=NULL;
        
        //recursive call for break
        left=sortDoubly(left);
        right=sortDoubly(right);
        
        Node* result=merge(left,right);
        
        return result;
}

//{ Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

// } Driver Code Ends