//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends

string buildLowestNumber(string num, int k)
{
stack<char>st;
int cnt=0;
int n=num.length();
for(int i=0;i<n;i++){
    if(st.empty()){
        st.push(num[i]);
        continue;
    }
    if(st.top()>num[i]){
        while(!st.empty()&&st.top()>num[i]&&cnt<k){
            ++cnt;
            st.pop();
        }
        st.push(num[i]);
    }
    else st.push(num[i]);
}
while(cnt<k&&!st.empty()){
    st.pop();
    ++cnt;
}
string ans="";
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
reverse(ans.begin(),ans.end());
int j=0;
while(j<ans.size()-1&&ans[j]=='0'){
    j++;
}
return ans.substr(j);
}