//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
   vector<int> zigZagTraversal(Node* root) {
        vector<int> result; // Vector to store the zigzag traversal
        
        // Check if the root is NULL, return an empty result if so
        if (root == NULL) return result;

        queue<Node*> q; // Queue to perform level-order traversal
        q.push(root);   // Push the root node into the queue
        bool leftToRight = true; // Flag to track the direction of traversal

        // Loop until the queue is empty
        while (!q.empty()) {
            int size = q.size(); // Current size of the queue
            vector<int> ans(size); // Temporary vector to hold node values at the current level

            // Process nodes at the current level
            for (int i = 0; i < size; i++) {
                Node* frontNode = q.front(); // Get the front node from the queue
                q.pop(); // Remove the front node from the queue

                // Calculate the index where the node value will be inserted in ans
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->data;

                // If there is a left child, push it into the queue
                if (frontNode->left) q.push(frontNode->left);

                // If there is a right child, push it into the queue
                if (frontNode->right) q.push(frontNode->right);
            }

            // Toggle the direction for the next level
            leftToRight = !leftToRight;

            // Copy the values from ans vector to the result vector
            for (auto i : ans) {
                result.push_back(i);
            }
        }

        return result; // Return the zigzag traversal result
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.zigZagTraversal(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
     
    }
    return 0;
}

// } Driver Code Ends