/*  You are given string str. You need to remove the consecutive duplicates from the given string using a Stack.
 

Example 1:

Input: 
aaaaaabaabccccccc

Output: 
ababc

Explanation: 
Removing all consecutive duplicates, 
we have no duplicates consecutively.  */

string removeConsecutiveDuplicates(string str)
{
    // Your code here
    string ans="";
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {

        if(s.empty() || s.top()!=str[i])
        s.push(str[i]);

    }

    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
