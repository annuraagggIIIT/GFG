//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        Node* nextt = nullptr;

        while (curr != nullptr) {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }

        return prev;
    }

    Node* compute(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Step 1: Reverse the linked list
        head = reverseList(head);

        // Step 2: Traverse the reversed list to remove nodes with greater right-side values
        Node* curr = head;
        Node* maxNode = head;
        Node* temp = nullptr;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->next->data < maxNode->data) {
                temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
                maxNode = curr;
            }
        }

        // Step 3: Reverse the linked list again to get the final result
        head = reverseList(head);
        return head;
    }
};


   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends