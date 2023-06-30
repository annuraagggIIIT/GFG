//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int isPossible (string S)
{
    int temp[26] = {0};
    for(int i = 0; i < S.length(); i++)
        temp[S[i] - 'a']++;
    
    int count = 0;
    if(S.length() % 2 == 0)
    {
        for(int i = 0; i < 26; i++)
        {
            if(temp[i] % 2 != 0)
                return false;
        }
    }
    else
    {
        for(int i = 0; i < 26; i++)
        {
            if(temp[i] % 2 != 0)
                count++;
            if(count > 1)
                return false;
        }
        if(count == 0)
            return false;
    }
    return true;
}