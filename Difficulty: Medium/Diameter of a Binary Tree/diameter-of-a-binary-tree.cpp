/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int diameter(Node* root) {
        // code here
        if (root == NULL)
            return 0;
        int lefth = diameter(root->left);
        int righth = diameter(root->right);
        int curr = height(root->left)+height(root->right);
        return max(curr,max(lefth,righth));
    }
    
    int height(Node* root){
        if (root == NULL)return 0;
        int lefth = height(root->left);
        int righth = height(root->right);
        return 1+ max(lefth,righth);
    }
};