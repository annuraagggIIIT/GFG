class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
     int n = arr.size();
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i; // or i+1 if 1-based indexing is needed

        leftSum += arr[i];
    }

    return -1;
    }
};