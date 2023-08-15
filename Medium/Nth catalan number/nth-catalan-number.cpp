//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
   long long funct(long long a,long long b,const int m){
        long long ans=1;
        while(b){
            if(b&1) ans=(ans*1LL*a)%m;
            b=b/2;
            a=(a*1LL*a)%m;
        }
        return ans%m;
    }
    int findCatalan(int n) 
    {
        const int m=1e9+7;
        vector<int>v;
        v.push_back(1);
        for(int i=1;i<=n;i++){
            long long p=1,q=1;
            for(int j=2*i;j>i;j--)p=(p*j)%m;
            for(int j=1;j<=i;j++) q=(q*j)%m;
            p=(p*funct(q,m-2,m))%m;
            p=(p*funct(i+1,m-2,m))%m;
            v.push_back(p);
        }
        return v[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends