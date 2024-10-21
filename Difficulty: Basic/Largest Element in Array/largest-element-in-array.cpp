//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // Initialize the maximum element as the first element
        int max_element = arr[0];

        // Traverse through the array to find the maximum element
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max_element) {
                max_element = arr[i];
            }
        }

        // Return the largest element
        return max_element;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends