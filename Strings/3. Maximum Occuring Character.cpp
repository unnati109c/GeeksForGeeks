/*Given a string str. The task is to find the maximum occurring character in the string str. 
If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Input:
str = output
Output: t
Explanation:  t and u are the characters with the same frequency, but t is
lexicographically smaller.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
   
    char getMaxOccuringChar(string str)
    {
        map<char,int>count;
        int maxi=INT_MIN;
        for(int i=0;i<str.length();i++)
        {
            count[str[i]]++;
            maxi=max(maxi,count[str[i]]);
        }
        for(auto i:count)
        {
            if(i.second==maxi)
            return i.first;
        }
    }

};

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
