//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution

{

    public:

        void strangeSort (int arr[], int n, int k)

            {

             //code here.

             int temp=arr[k-1];

             arr[k-1]=INT_MIN;

             

             sort(arr,arr+n);

             

             for(int i=0;i<k;i++){

                 arr[i] = arr[i+1];

             }

             
               arr[k-1]= temp;
            

            }

 

};


// 2 3 12 30 79 
// 3 3 12 30 79
// 3 12 12 30 79 

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int k; cin >> k;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		ob.strangeSort (arr, n, k);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends