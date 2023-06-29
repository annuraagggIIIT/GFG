//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
         for(int i=0;i<S.length();i++)
        {
            if(int(S[i])>=97 && int(S[i])<=122)
            {
                S[i]=char(122-int(S[i])+97);
            }
            else if(int(S[i])>=65 && int(S[i])<=90)
            {
                S[i]=char(90-int(S[i])+65);
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends