/* You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0]. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    public:
    
    ll findSubarray(vector<ll> arr, int n ) {
        
        ll sum=0, count=0;
        
        unordered_map<ll,ll>m;
        m[0]=1;
        
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(m.find(sum)!=m.end())
            {
                count+=m[sum];
            }
            m[sum]++;
            
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
