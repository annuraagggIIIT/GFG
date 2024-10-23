//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
     vector<int> common_digits(vector<int>& nums) {
        // Boolean array to track presence of digits (0 to 9)
        bool digitPresent[10] = {false};

        // Iterate through each number in the nums vector
        for (int num : nums) {
            // Use a temporary variable to process digits
            int temp = num;
            // Mark digits as present
            while (temp > 0) {
                digitPresent[temp % 10] = true;  // Mark the digit present
                temp /= 10;  // Remove the last digit
            }
        }

        // Prepare the result vector to store the distinct digits
        vector<int> result;
        for (int i = 0; i < 10; i++) {
            if (digitPresent[i]) {
                result.push_back(i);  // Add the digit to the result if present
            }
        }

        return result;  // Return the vector of distinct digits
    }     
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends