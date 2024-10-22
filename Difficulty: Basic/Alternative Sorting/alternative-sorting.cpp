//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Sort the array
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        // Create a result vector of size n to store the alternate sorted elements
        vector<int> a(n);
        
        int start = 0;       // Start from the smallest element
        int end = n - 1;     // Start from the largest element

        // Fill the result array alternately with largest and smallest elements
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Even indices: put the largest remaining element
                a[i] = arr[end--];
            } else {
                // Odd indices: put the smallest remaining element
                a[i] = arr[start++];
            }
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
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends