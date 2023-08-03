//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.

Node* swapkthnode(Node* head, int num, int k) {
    // If K is greater than the number of nodes, swapping is not valid, return the head node as it is.
    if (k > num) {
        return head;
    }
    
    // If K is the first or last node, swap them and return the new head.
    if (k == 1 || k == num) {
        Node* firstNode = head;
        Node* secondLastNode = head;
        
        // Traverse to the second last node.
        while (secondLastNode->next->next) {
            secondLastNode = secondLastNode->next;
        }
        
        Node* lastNode = secondLastNode->next;
        secondLastNode->next = firstNode;
        lastNode->next = firstNode->next;
        firstNode->next = NULL;
        return lastNode;
    }
    
    // Find the Kth node from the beginning.
    Node* prevKthFromBeginning = NULL;
    Node* currKthFromBeginning = head;
    
    int count1 = k - 1;
    
    while (count1) {
        prevKthFromBeginning = currKthFromBeginning;
        currKthFromBeginning = currKthFromBeginning->next;
        count1--;
    }
    
    // Find the Kth node from the end.
    int count2 = num - k;
    Node* prevKthFromEnd = NULL;
    Node* currKthFromEnd = head;
    
    while (count2) {
        prevKthFromEnd = currKthFromEnd;
        currKthFromEnd = currKthFromEnd->next;
        count2--;
    }
    
    // Swap the nodes by adjusting the links.
    prevKthFromEnd->next = currKthFromBeginning;
    prevKthFromBeginning->next = currKthFromEnd;
    Node* temp = currKthFromEnd->next;
    currKthFromEnd->next = currKthFromBeginning->next;
    currKthFromBeginning->next = temp;
    
    // Return the head node after swapping.
    return head;
}

