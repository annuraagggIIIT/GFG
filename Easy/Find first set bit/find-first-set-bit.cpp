//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    unsigned int getFirstSetBit(int n) {
        if (n == 0) {
            return 0; // Handle the case when n is 0 separately.
        }

        int position = 1; // Initialize the position to 1 (rightmost bit).

        while ((n & 1) == 0) {
            n >>= 1; // Right shift n by 1.
            position++; // Increment the position.
        }

        return position;
    }
};



//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends