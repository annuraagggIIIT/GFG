//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	     int odd_cnt=0;
        int even_cnt =0;
        int n = s.size();
        bool flag = true;
        for(int i = n-1; i>=0;i--){
            if(s[i]=='1' && flag) odd_cnt++;
            else if(s[i]=='1' && !flag) even_cnt++;
            flag = !flag;
        }
        if((odd_cnt-even_cnt)%3==0) return 1;
        else return 0;
 
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends