/*Given an integer an N. The task is to return the position of first set bit 
found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Input: N = 18
Output: 2
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    unsigned int getFirstSetBit(int n){
        int f=1, count=0;
        while(n)
        {
            if((f&n)>0) return count+1;
            else
            {
                count++;
                n=n>>1;
            }
        }
        return count;
        
    }
};


int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}