//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int make_num(string &new_str){
        int n = new_str.size();
        int lastnum = 0; char last_sign = '+'; int sum = 0; int prev;
        for(int i=0; i<n; i++){
            if(new_str[i] == '+' || new_str[i] == '-' || new_str[i] == '*'){
                if(last_sign == '+'){
                    sum+=lastnum; prev = lastnum;
                }
                else if(last_sign == '*'){
                   sum = sum-prev;  int k = prev*lastnum;
                   sum += k; prev = k;
                }
                else{
                    sum-=lastnum; prev = -lastnum;
                } 
                
                last_sign = new_str[i];  lastnum = 0;
                }
            else{
                 lastnum = lastnum*(10) + (new_str[i]-'0'); 
            }
        }
         if(last_sign == '+'){
                    sum+=lastnum;
                }
                else if(last_sign == '*'){
                     sum = sum-prev;  int k = prev*lastnum;
                   sum += k; prev = sum;
                }
                else{
                    sum-=lastnum;
                } 
                
        return sum;
    }
    void make_string(string &S, vector<string> &chandra, int &target,int ind,char last,string new_str,int n){
        if(ind == n){
             if(make_num(new_str) == target){
                 chandra.push_back(new_str);
             }
             return;
        }
          if(last!='0'){
            make_string(S,chandra,target,ind+1,last,new_str+S[ind],n);}
    
        make_string(S,chandra,target,ind+1,S[ind],new_str+"+"+S[ind],n);
        make_string(S,chandra,target,ind+1,S[ind],new_str+"-"+S[ind],n);
        make_string(S,chandra,target,ind+1,S[ind],new_str+"*"+S[ind],n);
       
    }
    vector<string> addOperators(string S, int target) {
       int n = S.size();
       vector<string>chandra; int ind = 1; char last = S[0];
       string new_str = ""; new_str+=S[0];
       make_string(S,chandra,target,ind,last,new_str,n);
       return chandra;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends