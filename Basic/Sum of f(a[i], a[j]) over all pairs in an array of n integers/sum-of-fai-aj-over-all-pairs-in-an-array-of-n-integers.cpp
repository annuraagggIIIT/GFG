//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the sum
int sum(int a[], int n);


// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       	cout << sum(arr, n)<<endl; 
    }

	return 0;
}

// } Driver Code Ends


int sum(int a[], int n)
{
    unordered_map<int, int> count;
    int output = 0, checksum = 0;
    for (int i = 0; i < n; i++)
    {
        output += (i * a[i]) - checksum;
        checksum += a[i];
        if (count[a[i] - 1])
            output -= count[a[i] - 1];
        if (count[a[i] + 1])
            output += count[a[i] + 1];
        count[a[i]]++;
    }
    return output;
}