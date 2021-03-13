/*Given two arrays A and B contains integers of size N and M, the task is to find 
numbers which are present in the first array, but not present in the second array.

Input: N = 6, M = 5
A[] = {1, 2, 3, 4, 5, 10}
B[] = {2, 3, 1, 0, 5}
Output: 4 10
Explanation: 4 and 10 are present in first array, but not in second array.

Input: N = 5, M = 5
A[] = {4, 3, 5, 9, 11}
B[] = {4, 9, 3, 11, 10}
Output: 5  
Explanation: Second array does not contain element 5.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(M).
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    vector<long long>ans;
        unordered_set <long long> s; 
        for (long long i = 0; i < m; i++) 
            s.insert(b[i]); 
      
        for (long long i = 0; i < n; i++) 
            if (s.find(a[i]) == s.end()) 
                ans.push_back(a[i]);
        return ans;
	} 
};
	

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends