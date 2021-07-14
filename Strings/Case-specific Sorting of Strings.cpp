/*  Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX  */

string caseSort(string str, int n)
{
    // your code here
    string lower="";
    string upper="";
    string pattern;
    for(auto i : str)
    {
        if(i>='A' and i<='Z')
        {
            upper+=i;
            pattern+='#';
        }
        else if(i>='a' and i<='z')
        {
            lower+=i;
            pattern+='.';
        }
    }

    //cout<<pattern;
    sort(lower.begin(),lower.end());
    sort(upper.begin(),upper.end());
    int u=-1, v=-1;
    for(int i=0;i<n;i++)
    {
        if(pattern[i]=='.')
        {
            pattern[i]=lower[++u];
        }
        else
        {
            pattern[i]=upper[++v];
        }

    }


    return pattern;
}
