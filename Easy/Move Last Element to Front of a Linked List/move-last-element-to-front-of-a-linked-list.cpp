//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    ListNode* moveToFront(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            // Empty list or only one node, so no need to move
            return head;
        }

        ListNode* tail = head;
        ListNode* secondLast = NULL;

        // Traverse to the end of the list and find the second last node
        while (tail->next != NULL) {
            secondLast = tail;
            tail = tail->next;
        }

        // Set the next pointer of the tail node to the head of the list
        tail->next = head;

        // Update the next pointer of the second last node to NULL
        secondLast->next = NULL;

        // Update the head of the list to be the tail node
        head = tail;

        return head;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ListNode*> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=new ListNode(x);
            if(i!=0){
                a[i-1]->next=a[i];
            }
        }
        ListNode *head=a[0];
        Solution ob;
        head=ob.moveToFront(head);
        while(head!=NULL){
            cout<<head->val;
            if(head->next!=NULL){
                cout<<" ";
            }
            head=head->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends