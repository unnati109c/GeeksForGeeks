/* Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. 
Find the number occurring only once.
Input:
N = 5
A = {1, 1, 2, 5, 5}
Output: 2
Explanation: 
Since 2 occurs once, while other numbers occur twice, 2 is the answer. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int search(int A[], int N){
	    
	    int ans=A[0];
	    for(int i=1;i<N;i++)
	    {
	        ans^=A[i];
	    }
	    return ans;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends
