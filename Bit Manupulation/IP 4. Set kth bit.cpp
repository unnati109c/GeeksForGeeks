/*Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. 
The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

Input:
N = 10 
K = 2
Output:
14
Explanation:
Binary representation of the given number 10 is: 1 0 1 0, number of bits in the 
binary reprsentation is 4. Thus 2nd bit from right is 0. The number after changing
this bit to 1 is: 14(1 1 1 0).

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int setKthBit(int n, int k)
    {
        int count=0;
        int f=1;
        while(count!=k)
        {
            f<<=1;
            count++;
        }
        int ans = n|f;
        return ans;
    }
    
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends