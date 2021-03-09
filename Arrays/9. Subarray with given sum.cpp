/*Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        int curr_sum = arr[0], start = 0, end=0, i; 
	    for (i = 1; i <= n; i++) 
	    { 
		    while (curr_sum > sum && start < end) 
		    { 
			    curr_sum = curr_sum - arr[start]; 
			    start++; 
		    } 
		    if (curr_sum == sum) 
		    { 
			    return vector<int> {start+1,end+1}; 
		    } 
		    if (i < n) 
		    {
			curr_sum = curr_sum + arr[i]; 
			end++;
		    }
	    } 
        return vector<int> {-1};
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends