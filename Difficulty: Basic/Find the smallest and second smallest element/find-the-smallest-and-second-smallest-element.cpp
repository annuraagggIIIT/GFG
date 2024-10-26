//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
       vector<int>answer;
       int n=arr.size();
       if(n<2)return {-1};
       sort(arr.begin(),arr.end());
       answer.push_back(arr[0]);
       for(int i=1;i<n;i++)
       {
           if(arr[i]!=arr[0])
           {
               answer.push_back(arr[i]);
               break;
           }
       }
       if(answer.size()<2)
       {
           return {-1};
       }
       return answer;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends