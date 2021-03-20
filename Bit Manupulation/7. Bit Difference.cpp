/*You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.

Input: A = 20, B = 25
Output: 3
Explanation:
A  = 10100
B  = 11001
As we can see, the bits of A that need to be flipped are 10100. If we flip 
these bits, we get 11001, which is B.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int count=0;
        int ans= a^b;
        while(ans)
        {
            count++;
            ans = ans & (ans-1);
        }
        return count;
        
    }
};

int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends