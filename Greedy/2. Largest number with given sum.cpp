/* Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. 
He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

Example 1:

Input:
N = 5, S = 12
Output:
93000 */

class Solution
{
    public:
  
    string largestNumber(int n, int sum)
    {
        if(sum>n*9) return "-1";
        string res="";
        for(int i=0;i<n;i++)
        {
            if(sum>=9)
            {
            res+='9';
            sum-=9;
            }
            else if(sum>0)
            {
                res+=to_string(sum);
                sum=0;
            }
            else
            {
                res+='0';
            }
        }
        return res;
    }
};
