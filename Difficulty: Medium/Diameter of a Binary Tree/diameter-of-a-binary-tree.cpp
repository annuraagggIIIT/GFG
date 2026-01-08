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
    int height(Node* root, int &ans){
        if (root==NULL)return 0;
        int lefth= height(root->left,ans);
        int righth=height(root->right,ans);
        ans = max(ans, (lefth+righth)) ;
        return 1+max(lefth,righth);
    }
    
    int diameter(Node* root) {
        // code here
        int ans=0;
        height(root,ans);
        return ans;
    }
};