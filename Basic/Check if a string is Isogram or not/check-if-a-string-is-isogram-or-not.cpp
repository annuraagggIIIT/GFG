//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        string str;
        for(int i=0;i<s.size();i++)
        {
            str.push_back(s[i]);
            for(int j=0;j<s.size();j++)
            {
                if(i!=j){
                if(str[j]==str[i])
                return false;
                }
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends