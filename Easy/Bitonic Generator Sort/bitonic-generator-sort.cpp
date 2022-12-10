//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
		// Your code goes here
		vector <int>even;
		vector<int>odd;
		for(int i=0;i<n;i++)
		{
		    if(i%2==0)
		    {
		    even.push_back(arr[i]);
		    }
		    else
		    {
		        odd.push_back(arr[i]);
		    }
		    
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		reverse(odd.begin(),odd.end());
	    vector<int> v3(even);
 v3.insert(v3.end(), odd.begin(), odd.end());
 
 for(int i=0;i<n;i++)
 {
     arr[i]=v3[i];
 }
 
}


	
		 

};

//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends