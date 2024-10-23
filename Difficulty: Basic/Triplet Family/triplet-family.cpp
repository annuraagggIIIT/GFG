//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n = arr.size();  // Get the size of the array
        
        // Sort the array
        sort(arr.begin(), arr.end());

        // Loop through each element to find the triplet
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    // Check if the sum of arr[i] and arr[j] equals arr[k]
                    if (arr[i] + arr[j] == arr[k]) {
                        return true;  // Found a triplet
                    }
                }
            }
        }
        
        // If no triplet is found, return false
        return false;
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
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends