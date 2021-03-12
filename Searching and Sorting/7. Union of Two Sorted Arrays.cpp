/*Union of two arrays can be defined as the common and distinct elements in the two arrays.
Given two sorted arrays of size N and M respectively, find their union.

Input: 
N = 5, arr1[] = {1, 2, 3, 4, 5}  
M = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.

Input: 
N = 5, arr1[] = {2, 2, 3, 4, 5}  
M = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
 
Input:
N = 5, arr1[] = {1, 1, 1, 1, 1}
M = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 1 2
Explanation: Distinct elements including both the arrays are: 1 2.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(N+M).
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0;
        int j=0;
        vector<int>ans(n+m);
        int k=-1;
        while(i<n and j<m)
        {
            while(i<n-1 and arr1[i]==arr1[i+1])
            {
            	i++;
            }
            while(j<m-1 and arr2[j]==arr2[j+1])
            {
            	j++;
            }
        
        	if(arr1[i]<arr2[j])
        	{
            	ans[++k]=(arr1[i++]);
        	}
        	else if(arr1[i]>arr2[j])
	        {
	            ans[++k]=(arr2[j++]);
	        }
	        else
	        {
	            ans[++k]=(arr1[i++]);
	            j++;
	        }
	    }
	        
        while(i<n)
        {
            if(i<n-1 and arr1[i]==arr1[i+1])
            i++;
            else
            ans[++k]=(arr1[i++]);
        }
        
         while(j<m)
        {
            if(j<m-1 and arr2[j]==arr2[j+1])
            j++;
            else
            ans[++k]=(arr2[j++]);
        }
        
        
        ans.resize(k+1);
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends