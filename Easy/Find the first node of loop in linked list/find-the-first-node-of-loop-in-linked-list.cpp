//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
//User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
public:
    // Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            // Empty list or only one node, so no loop
            return -1;
        }

        Node* slow = head;
        Node* fast = head;
        bool hasLoop = false;

        // Move the fast pointer by two nodes and the slow pointer by one node
        // If there is a loop, they will eventually meet
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasLoop = true;
                break;
            }
        }

        if (!hasLoop) {
            // No loop found
            return -1;
        }

        // Move the slow pointer to the head and continue moving both pointers at the same pace
        // The point where they meet again will be the first node of the loop
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends