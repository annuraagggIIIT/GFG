//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
           vector<int>a(26,-1),b(26,0);
        for(int i=0;i<S.size();i++)
        {
            a[S[i]-'a']=i;
            b[S[i]-'a']++;
        }
        int m=INT_MAX;
        string s="abcdefghijklmnopqrstuvwxyz";
        char ans='$';
        for(int i=0;i<26;i++)
        {
            if(a[i]!=-1)
            {
                if(m>a[i] and b[i]==1)
                {
                    ans=s[i];
                    // cout<<'a'+i<<endl;
                    m=a[i];
                }
            }
        }
        return ans;
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends