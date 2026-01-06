/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if (root == NULL)
            return 0;   // key change

        int lefth = sumBT(root->left);
        int righth = sumBT(root->right);

        return lefth + righth + (root->data);
    }
};