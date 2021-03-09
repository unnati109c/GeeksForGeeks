/*Given a positive integer value N. The task is to find how many numbers 
less than or equal to N have numbers of divisors exactly equal to 3.

Input : N = 16
Output : 2
4 and 9 have exactly three divisors.

Input:
N = 6
Output: 1
Explanation: The only number with 3 divisor is 4.

Input : N = 49
Output : 4 
4, 9, 25 and 49 have exactly three divisors.

Idea : all the required numbers are perfect squares and that too are only 
of primes numbers. So all primes i, such that i*i is less than equal to N are three-prime numbers. 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
        return false;
         
        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            return false;
        }
        return true;
    }
    
    int exactly3Divisors(int n)
    {
        int count=0;
        for(int i=2;i*i<=n;i++)
        {
            if(isPrime(i))
            {
                if(i*i<=n)
                count++;
            }
        }
        return count;
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
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends