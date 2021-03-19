/* Given a number N. The task is to check whether it is sparse or not. 
A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

Input: N = 2
Output: true
Explanation: Binary Representation of 2 is 10, 
which is not having consecutive set bits. 
So, it is sparse number.
Example 2:

Input: N = 3
Output: false
Explanation: Binary Representation of 3 is 11, 
which is having consecutive set bits in it. 
So, it is not a sparse number.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
*/

#include<iostream>
using namespace std;

class Solution{
    public:
    
    bool isSparse(int n){
        if(n & (n>>1))
        return false;
        else
        return true;  
    }
};

int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends