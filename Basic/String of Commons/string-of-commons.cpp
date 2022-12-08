//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	string  common_String(string s1, string s2){
   	    // Code here
   	     string s="";
       for(auto &it : s1)
       {
           if(find(s2.begin(),s2.end(),it)!=s2.end())
           {
               s.push_back(it);
                              s2.erase(remove(s2.begin(),s2.end(),it),s2.end());

           }
       }
       sort(s.begin(),s.end());
       if(s.size()!=0)
       {
           return s;
       }
       else
       {
           return "nil";
       }


   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.common_String(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends