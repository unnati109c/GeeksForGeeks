/* Given an array of strings, return all groups of strings that are anagrams. 
The groups must be created in order of their appearance in the original array. 

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of anagrams "god", "dog" make group 1. "act", "cat", "tac" make group 2.  */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

vector<vector<string> > Anagrams(vector<string>& strs) 
{
    // Your Code Here
    unordered_map<string, vector<string>>m;
        
        for(auto i : strs)
        {
            string temp=i;
            sort(temp.begin(), temp.end());
            m[temp].push_back(i);
        }
        
        vector<vector<string>> res;
        
        for(auto itr : m) 
            res.push_back(itr.second);
        
        return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends

