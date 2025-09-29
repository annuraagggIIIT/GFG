// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
         int n = arr.size();
        vector<int> ans(n, 0);  // properly sized vector
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += arr[i];
            ans[i] = sum / (i + 1);  // integer division
        }
        return ans;
    }
};