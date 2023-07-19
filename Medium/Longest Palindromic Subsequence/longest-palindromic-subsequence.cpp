//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<int>> dp;

    int solve(int left, int right, string a) 
    {
       if(left == right)
        return 1;
       
       if(left>right)
        return 0;
       
       if(dp[left][right]!=-1)
        return dp[left][right];
       
       if(a[left]==a[right])
       {
           dp[left][right] = 2+solve(left+1,right-1,a);
       }
       else
       {
           dp[left][right] = max(solve(left+1,right,a),solve(left,right-1,a));
       }
       
       return dp[left][right];
    }
    
    int longestPalinSubseq(string A) 
    {
        //code here
        int n = A.size();
        dp.clear();
        dp.resize(n, vector<int>(n, -1));
        return solve(0, n - 1, A);
    }
};


//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends