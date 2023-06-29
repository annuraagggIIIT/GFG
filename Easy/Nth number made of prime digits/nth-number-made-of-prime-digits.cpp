//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
       char prime[4] = {'2','3','5','7'};
        string res="";
        while(n>0){
            int m = n%4;
            if(m!=0){
                res+=prime[m-1];
            }
           else{res+=prime[3];
           }
           if(n%4 == 0) n--;
            n=n/4;
        }
        
        reverse(res.begin(),res.end());
        return stoi(res);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends