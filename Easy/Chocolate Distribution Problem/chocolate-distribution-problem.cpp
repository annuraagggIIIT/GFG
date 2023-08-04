//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long minDiff = INT_MAX;
        sort(a.begin(), a.end());
        
        long long mini = INT_MAX;
        long long maxi = INT_MIN;
        for(int i=0; i<=n-m; i++){
            mini = i;
            maxi = i+m-1;
            long long diff = a[maxi] - a[mini];
            minDiff = min(minDiff,diff);
        }
        return minDiff;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends