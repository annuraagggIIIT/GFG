//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
 vector<int> nextGreatest(vector<int> a) {
    int n = a.size();
    int maxFromRight = -1;  // Initialize the maximum as -1, which will be the last element in result
    for (int i = n - 1; i >= 0; i--) {
        int current = a[i];
        a[i] = maxFromRight;  // Replace current element with the max from the right
        maxFromRight = max(maxFromRight, current);  // Update maxFromRight
    }
    return a;
}
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.nextGreatest(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends