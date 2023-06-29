//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            //code here.
             string vwls ="";
            for(int i=0; i<s.size();i++){
                if(s[i]=='a' | s[i]=='e'| s[i]=='i'| s[i]=='o'| s[i]=='u' )
                 vwls+=s[i];
            }
            
             for(int i=0,k=0; i<s.size();i++){
                if(s[i]=='a' | s[i]=='e'| s[i]=='i'| s[i]=='o'| s[i]=='u' )
                s[i]=vwls[vwls.size()-1-(k++)];
            }
            
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends