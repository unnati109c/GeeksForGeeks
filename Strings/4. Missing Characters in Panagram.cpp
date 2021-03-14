/*You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.

Input:
s = Abcdefghijklmnopqrstuvwxy
Output: z

Input:
s = Abc
Output: defghijklmnopqrstuvwxyz
 
Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string missingPanagram(string str){
        
        bool present[26] = {false};
     
        for (int i=0; i<str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                present[str[i]-'a'] = true;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                present[str[i]-'A'] = true;
        }
     
        string res = "";
        int flag=0;
        for (int i=0; i<26; i++)
            if (present[i] == false)
            {
                res.push_back((char)(i+'a'));
                flag=1;
            }
        if(flag==1)
            return res;
        else 
        	return "-1";
            
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	Solution obj;
	cout << obj.missingPanagram(s) << endl;
	}
	return 0;
	
}

  // } Driver Code Ends