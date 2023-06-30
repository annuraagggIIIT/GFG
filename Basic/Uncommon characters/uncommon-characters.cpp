//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    string UncommonChars(string a, string b) {
    set<char> ans;
    unordered_map<char, int> m1, m2;

    for (auto c : a) {
        m1[c]++;
    }
    for (auto c : b) {
        m2[c]++;
    }

    for (auto c : b) {
        if (m1[c] == 0) {
            ans.insert(c);
        }
    }
    for (auto c : a) {
        if (m2[c] == 0) {
            ans.insert(c);
        }
    }

    if (ans.empty()) {
        return "-1"; // Return -1 if no uncommon elements
    }

    string result(ans.begin(), ans.end());
    return result;
}
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends