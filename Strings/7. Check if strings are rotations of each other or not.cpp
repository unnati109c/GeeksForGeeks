/*Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. 
The characters in the strings are in lowercase.

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by left-rotating s1 by 5 units.

Input:
mightandmagic
andmagicmigth
Output: 
0

Expected Time Complexity: O(N).
Expected Space Complexity: O(N).
Note: N = |s1|.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    bool areRotations(string str1,string str2)
    {
        if (str1.length() != str2.length()) 
        return false; 
  
        string temp = str1 + str1;  
        return (temp.find(str2) != string::npos); 
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}