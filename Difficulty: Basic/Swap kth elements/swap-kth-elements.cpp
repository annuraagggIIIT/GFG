//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void swapKth(int k, vector<int> &arr) {
        // code here
        int a , b, temp,n=arr.size()-1 ;
        a=arr[k-1];
        b=arr[n-k+1];
        arr[k-1]=b;
        arr[n-k+1] = a;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.swapKth(k, arr);
        for (auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends