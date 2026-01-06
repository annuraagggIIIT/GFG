/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        // code here
        if (r1==NULL || r2 ==NULL){
        return r1==r2;}
        
        bool isleft=isIdentical(r1->left,r2->left);
        bool isright=isIdentical(r1->right,r2->right);
        return isleft && isright && r1->data == r2->data;
    }
};