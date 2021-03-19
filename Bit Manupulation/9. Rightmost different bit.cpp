/*Given two numbers M and N. The task is to find the position of the 
ightmost different bit in the binary representation of numbers.

Example 1: 

Input: M = 11, N = 9
Output: 2
Explanation: Binary representation of the given numbers are: 1011 and 1001, 
2nd bit from right is different.

Expected Time Complexity: O(max(log m, log n)).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    
    int posOfRightMostDiffBit(int m, int n)
    {
        int f=1;
        int count=1;
        while((f&m)==(f&n))
        {
            count++;
            f<<=1;
        }
        return count;
        
    }
};


int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends