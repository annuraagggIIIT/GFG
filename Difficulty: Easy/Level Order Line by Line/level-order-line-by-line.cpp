class Solution {
public:
    void solve(Node* root, vector<vector<int>>& ans) {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                level.push_back(curr->data);

                if (curr->left != NULL)
                    q.push(curr->left);

                if (curr->right != NULL)
                    q.push(curr->right);
            }

            ans.push_back(level);
        }
    }

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        solve(root, ans);
        return ans;
    }
};
