/*
Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.

Input: N = 5
Output: 3
Explanation: Factorial of 5 is 120.
Number of digits in 120 is 3 (1, 2, and 0)

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int digitsInFactorial(int n)
    {
        if(n<0) return 0;
        if(n<=1) return 1;
        double digits=0;
        for(int i=2;i<=n;i++)
        {
            digits+=log10(i);
        }
        return floor(digits)+1;
    }
};

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
