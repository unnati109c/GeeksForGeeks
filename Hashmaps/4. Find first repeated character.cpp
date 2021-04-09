/* Given a string S. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of 
second occurrence is smallest. S contains only lowercase letters.

Input: S="geeksforgeeks"
Output: e
Explanation: 'e' repeats at third position. */

string firstRepChar(string s)
{
    map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
        {
            m[s[i]]++;
        }
        else
        {
            string ans="";
            ans+=s[i];
            return ans;
        }
    }
    return "-1";
}
