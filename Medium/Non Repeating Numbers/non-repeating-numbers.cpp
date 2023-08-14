//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
   vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>vec;
        
        unordered_map<int,int>maps;
        for(auto num=nums.begin();num!=nums.end();++num)
        {
            ++maps[*num];
        }
        // maps<int,int>::iterator it=map.begin();
        
        for(auto it = maps.begin(); it != maps.end(); ++it)
         {
            if(it->second==1)
            {
              vec.push_back(it->first);
            }
            
         }
         sort(vec.begin(),vec.end());
         return vec;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends