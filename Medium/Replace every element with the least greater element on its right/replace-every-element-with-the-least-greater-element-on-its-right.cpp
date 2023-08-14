//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution {
public:
    vector<int> findLeastGreater(vector<int>& arr, int n)
    {
        vector<int>ans(n,-1);
        
        int globalmax=arr[n-1];
        int globalmin=arr[n-1];
        
        set<int>data;
        data.insert(arr[n-1]);
        
        for(int i=n-2;i>=0 ;i--)
        {
            
            if(arr[i]>=globalmax)
            {
                ans[i]=-1;
                globalmax=arr[i];
            }
            else if(arr[i]<globalmin)
            {
                ans[i]=globalmin;
                globalmin=arr[i];
            }
            else
            {
                auto x=data.upper_bound(arr[i]);
                ans[i]=*x;
            }
            if(arr[i]>globalmax)
            {
                globalmax=arr[i];
            }
            if(arr[i]<globalmin)
            {
                globalmin=arr[i];
            }
            data.insert(arr[i]);
        }
        
        return ans;
    } 
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends