//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
    };
    
    Node* formbst(vector<int>& nums,int i,int j){
        if(i>j)return NULL;
        int mid=(i+j)/2;
        Node* n=new Node(nums[mid]);
        n->left=formbst(nums,i,mid-1);
        n->right=formbst(nums,mid+1,j);
        return n;
    }
    void solve(Node* &root,vector<int>& ans){
        if(root==NULL)return;
        ans.push_back(root->data);
        solve(root->left,ans);
        solve(root->right,ans);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        Node* root=formbst(nums,0,nums.size()-1);
        solve(root,ans);
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends