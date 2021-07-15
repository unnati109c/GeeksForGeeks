/* Minimum characters that are to be inserted such that no three consecutive characters are same.
Example 1:

Input:
S = aabbbcc
Output: 1
Explanation: In aabbbcc 3 b's occur
consecutively, we add a 'd',and Hence,
output will be aabbdbcc.
Example 1:

Input:
S = aaaaa
Output: 2
Explanation:  In aaaaa 5 a's occur
consecutively,we need to add 2 'b', and
Hence, the output will be aababaa. */

int modified (string a)
{
    // Your code here
    int c=0;
    for(int i=0;i<a.length()-2;i++)
    {
        if(a[i]==a[i+1] and a[i+1]==a[i+2])
        {
            c++;
            i++;
        }

    }
    return c;
}
