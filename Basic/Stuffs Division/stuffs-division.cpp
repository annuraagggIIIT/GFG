//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    bool possible(long long arr[], long long n)
    {
        //code here.
       long long int sum_ar=0;
        long long int sum_n=n;
        for(long long int i=0;i<n;i++)
        {
            sum_ar+=arr[i];
            sum_n+=i;
        }
        
        
    
    if(sum_ar==sum_n)
        {
            return true;
        } 
        else 
        return false;
    }
};







//{ Driver Code Starts.

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i =0;i<n;i++)
            cin >> arr[i];
        Solution ob;
        if(ob.possible(arr, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
// } Driver Code Ends