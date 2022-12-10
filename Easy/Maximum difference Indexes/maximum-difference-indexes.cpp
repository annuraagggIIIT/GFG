//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
   public:
   int maxDiffIndex(int a[], int n)
   {

       // Taking a map of int and vector. Then pushing the indices in the vector and finding the difference.
       map<int,vector<int>> m;
       for(int i=0;i<n;i++){
           m[a[i]].push_back(i);
       }
       int max = 0;
       
       map<int,vector<int>> ::iterator it;
       for(it = m.begin();it!=m.end();it++){
           int s = (it->second).size();
           if(max < ((it->second)[s-1] - (it->second)[0]))
           max = ((it->second)[s-1] - (it->second)[0]);
       }
       return max;
   }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends