//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
       std::vector<char> vec(s.begin(), s.end());  // Convert string to vector
    std::sort(vec.begin(), vec.end());  // Sort the vector
    std::string sortedString(vec.begin(), vec.end());  // Convert vector back to string
    return sortedString;
}