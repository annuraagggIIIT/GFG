//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    Node* divide(int N, Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        vector<int> evenList;
        vector<int> oddList;

        Node* temp = head;

        while (temp) {
            if (temp->data % 2 == 0) {
                evenList.push_back(temp->data);
            } else {
                oddList.push_back(temp->data);
            }

            temp = temp->next;
        }

    

        for (int i=0 ; i<evenList.size();i++ ) {
            cout<<evenList[i]<<" ";
          
        }
        for (int i=0 ; i<oddList.size();i++ ) {
            cout<<oddList[i]<<" ";
          
        }

        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends