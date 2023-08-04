//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
      bool ispar(string x)
    {
        stack<char>st;
        int size=x.length();
       
       for(int i=0;i<size;i++){
           if(x[i]=='{' || x[i]=='(' || x[i]=='['){
               
           st.push(x[i]);
              
           }
           else{
               if(st.size()==0)return false;
               char top=st.top();
               st.pop();
            
               if((x[i]=='}'&& top=='{')||(x[i]==')'&&top=='(')||(x[i]==']'&&top=='[')){
                   continue;
               }
               else{
                   return false;
               }
           }
       }
       // this is for the case when in stack elements left after all activity is completed.
       if(st.size()!=0)return false;
       
       return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends