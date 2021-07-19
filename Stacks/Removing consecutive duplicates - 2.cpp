/* You are given string str. You need to remove the pair of duplicates.
Note: The pair should be of adjacent elements and after removing a pair the remaining string is joined together. 

Example 1:

Input:
aaabbaaccd

Output: 
ad

Explanation: 
Remove (aa)abbaaccd =>abbaaccd
Remove a(bb)aaccd => aaaccd
Remove (aa)accd => accd
Remove a(cc)d => ad
Example 2:

*/

 string removePair(string str)
{
    string ans = "";
    stack<char>s;

    for(int i=0;i<str.length();i++)
    {
        if(s.empty() or s.top()!=str[i])
        {
            s.push(str[i]);
        }
        else
        {
            while(!s.empty() and s.top()==str[i] )
            {
                s.pop();
            }
        }
    }

    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;

}
