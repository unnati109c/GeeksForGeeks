/*Given a positive integer N. The task is to check if N is a power of 2. 
Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        int count=0;
        while(n)
        {
            count++;
            n= n&(n-1);
        }
        return count==1;
    }
};

int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  // } Driver Code Ends