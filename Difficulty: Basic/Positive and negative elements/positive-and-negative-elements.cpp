//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else
            neg.push_back(arr[i]);
        }
        vector<int>result;
        int t=0,tt=0;
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                result.push_back(pos[t]);
                t++;
            }
            else
            {
                result.push_back(neg[tt]);
                tt++;
            }
        }
        return result;
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
        vector<int> ans = obj.arranged(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends