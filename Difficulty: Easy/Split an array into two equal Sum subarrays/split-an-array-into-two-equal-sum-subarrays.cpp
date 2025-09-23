class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int l=0,r=0,n=arr.size();
        int i;
        int t=accumulate(arr.begin(),arr.end(),0);
        for( i = 0 ; i<n;i++ ){
            r=t-l;
            if(r==l){
                return true;
            }
            l+=arr[i];
        }
        return false;
    }
};
