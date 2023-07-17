//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int>v(26,0);
		    string ans=""; ans+=A[0];
		    int j=0;
		    v[A[0]-'a']++;
		    int n=A.size();
		    for(int i=1;i<n;i++)
		    {
		        v[A[i]-'a']++;
		        if(v[A[i]-'a']>1)
		        {
		            while(j<=i && v[A[j]-'a']>1)
		            {
		                j++;
		            }
		        }
		        
		        if(j<n && v[A[j]-'a']==1)
		        ans+=A[j];
		        else
		        ans+='#';
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends