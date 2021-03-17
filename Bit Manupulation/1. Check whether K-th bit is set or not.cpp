/*Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. 
Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.

Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100, in which 0th bit from LSB is not set. 
So, return false.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 109
0 ≤ K ≤ floor(log2(N) + 1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool checkKthBit(int n, int k){
        int f=1;
        f=f<<k;
        int res= n & f;
        if(res) return true;
        else return false;
    }
};


int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}  // } Driver Code Ends
