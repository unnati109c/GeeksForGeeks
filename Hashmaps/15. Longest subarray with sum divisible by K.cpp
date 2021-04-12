/* Given an array containing N integers and a positive integer K, find the length of the longest sub array with sum of the elements divisible by the given value K.

Input:
A[] = {2, 7, 6, 1, 4, 5}
K = 3
Output: 4
Explanation:The subarray is {7, 6, 1, 4} with sum 18, which is divisible by 3. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int>m;
	    m[0]=-1; // remainder is 0 at (-1)th index
	    int max_len=0;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        int rem = (sum%k +k)%k;
	        
	        if(m.find(rem)!=m.end())
	        {
	            max_len= max(max_len, i-m[rem]);
	        }
	        else
	        {
	            m[rem]=i;
	        }
	    }
	    return max_len;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends
