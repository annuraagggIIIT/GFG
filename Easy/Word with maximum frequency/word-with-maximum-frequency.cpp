//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
          map<string, int> mp;

        string temp="";

        for(int i=0;i<s.size();i++)

        {

            if(s[i]!=' ')

                temp+=s[i];

            else

            {

                mp[temp]++;

                temp="";

            }

        }

        mp[temp]++;

        

        string ans;

        int freq=-1;

        temp="";

        for(int i=0;i<s.size();i++)

        {

            if(s[i]!=' ')

                temp+=s[i];

            else

            {

                if(mp[temp]>freq)

                {

                    ans=temp;

                    freq=mp[temp];

                }

                temp="";

            }

        }

        if(mp[temp]>freq)

        {

            ans=temp;

            freq=mp[temp];

        }

        return ans+" "+to_string(freq);
}

