//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// #include <algorithm>


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& a) {
        // code here
        sort(a.begin(),a.end());
        int n= a.size();
       {
            for(int i=0;i<n-1;i+=2){
                swap(a[i],a[i+1]);
            }
            
        }
       
    }
};

//{ Driver Code Starts.

int main() {

    int t, n;
    cin >> t; // Input testcases
    cin.ignore();
    while (t--) // While testcases exist
    {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        sort(a.begin(), a.end());
        Solution ob;
        ob.convertToWave(a);

        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << endl;
    }
}
// } Driver Code Ends