//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s)
    {
    //complete the function heredef removeConsonants(s):
   string str;
        for (int i = 0; i < s.size(); i++) 
        {
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            {
                str.push_back(s[i]);
            }
            
        }
        if(str.size()==0)
        {
        cout<<"No Vowel";
        }
        else{
        return str;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends