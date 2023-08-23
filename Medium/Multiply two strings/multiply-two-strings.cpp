//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
   string add(string s1, string s2)
    {
        int n = s1.length();
        int m = s2.length();
        int carry = 0;
        
        int i=0;
        int j=0;
        string ans="";
        
        while(i<n || j<m || carry)
        {
            int sum = carry;
            
            if(i<n)
            sum = sum + (s1[i]-'0');
            
            if(j<m)
            sum = sum + (s2[j]-'0');
            
            int r = sum%10;
            carry = sum/10;
            ans.push_back(r+'0');
            
            i++;
            j++;
        }
        return ans;
    }
    
    string multiplyStrings(string s1, string s2) {
       //Your code here
      reverse(s1.begin(),s1.end());
      reverse(s2.begin(),s2.end());
      int flag = 0;
      if(s1.back()=='-')
      {
      s1.pop_back();
      flag = flag+1;
      }
      
      if(s2.back()=='-')
      {
      s2.pop_back();
      flag = flag-1;
      }
       
      int n= s1.length();
      int m=s2.length();
       
      string temp="";
      string ans="0";
       
      for(int i=0;i<n;i++)
      {
          int q = (s1[i]-'0');
           
          int carry =0;
          int j=0;
          temp="";
           
          for(int k = 0;k<i;k++)
          temp.push_back('0');
           
          while(j<m || carry)
          {
              int  d=0;
               
              if(j<m)
              d = q* (s2[j]-'0');
               
              d = d+carry;
               
              carry = d/10;
              d = d%10;
               
              temp.push_back(d+'0');
              j++;
          }
           
          ans = add(temp,ans);
      }
       
      while(ans.back()=='0')
      ans.pop_back();
      
      if(flag)
      ans.push_back('-');
       
      reverse(ans.begin(),ans.end());
       return ans;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends