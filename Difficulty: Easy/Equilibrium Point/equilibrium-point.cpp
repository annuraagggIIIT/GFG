class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int l=0,r=0,t=0;;
        for(int i=0 ;i<arr.size();i++){
            t+=arr[i];
            
        }
        for(int i =0 ;i<arr.size();i++){
            r=t-l-arr[i];
            
            if(r==l){
                return i;
            }
            l+=arr[i];
        }
        return -1;
    }
};