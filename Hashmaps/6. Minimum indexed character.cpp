/*  Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. 
If no character of patt is present in str then print ‘No character present’.

Input:
str = geeksforgeeks
patt = set
Output: e
Explanation: e is the character which is present in given patt "geeksforgeeks" and is first found in str "set". 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters). */

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minIndexChar(string str, string patt)
    {
        map<char,int>first_occur;
        
        for(int i=0;i<str.length();i++)
        {
            if(first_occur.find(str[i])==first_occur.end())
            {
                first_occur[str[i]]=i;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<patt.length();i++)
        {
            if(first_occur.find(patt[i])!=first_occur.end())
            {
                ans=min(ans,first_occur[patt[i]]);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    Solution obj;
	    int ans = obj.minIndexChar(str, patt);
	    if(ans == -1)cout<<"No character present";
	    else cout<<str[ans];
	    cout<<endl;
	}return 0;
}
