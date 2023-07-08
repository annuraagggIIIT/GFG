//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
        int shift = segregate(arr, n);
        return findMissingPositive(arr + shift, n - shift);
    }

private:
    // Utility function to segregate positive and non-positive numbers
    int segregate(int arr[], int n) {
        int shift = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                swap(arr[i], arr[shift]);
                shift++;
            }
        }
        return shift;
    }

    // Utility function to find the smallest missing positive number
    int findMissingPositive(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            int absValue = abs(arr[i]);
            if (absValue <= n && arr[absValue - 1] > 0) {
                arr[absValue - 1] = -arr[absValue - 1];
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                return i + 1;
            }
        }
        return n + 1;
    }
};




//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends