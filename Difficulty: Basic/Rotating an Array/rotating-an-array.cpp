//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
                int n = arr.size();

        d = d % n;
        vector<int>temp ;
        for(int i=0; i<d;i++){
            temp.push_back(arr[i]);
        }
        // for(auto i:temp){
        //     cout<<i<<endl;
        // }
        int t=0;
        for(int i = d ; i<n;i++){
            
                arr[t]=arr[i];
                t++;
            
        }
        int tt=0;
        for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i]; // Place the temporary elements at the end
    }
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends