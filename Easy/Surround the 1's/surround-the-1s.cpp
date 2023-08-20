//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
   int Count(vector<vector<int> >& matrix) {
        // Code here
         int n=matrix.size(),m=matrix[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0) continue;
                int r[]={-1,0,1,0,1,-1,-1,1};
                int c[]={0,1,0,-1,1,1,-1,-1};
                int cnt=0;
                for(int k=0;k<8;k++){
                    int nr=i+r[k],nc=j+c[k];
                    if(nr>=0 && nc>=0 && nr<n && nc<m && matrix[nr][nc]==0) cnt++;
                }
                if(cnt%2==0 && cnt>0) ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends