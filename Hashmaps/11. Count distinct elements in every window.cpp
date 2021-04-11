/*  Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: 
Window 1 of size k = 4 is 1 2 1 3. Number of distinct elements in this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number of distinct elements in this window are 3.  */

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        map<int,int>m;
        vector<int>ans;
        int distinct_count=0;
        
        for(int i=0;i<k;i++)
        {
            if(m[arr[i]]==0)
            {
                distinct_count++;
            }
            m[arr[i]]++;
        }
        ans.push_back(distinct_count);
        
        for(int i=k;i<n;i++)
        {
            if(m[arr[i-k]]==1)
            {
                distinct_count--;
            }
            m[arr[i-k]]--;
            
            if(m[arr[i]]==0)
            {
                distinct_count++;
            }
            m[arr[i]]++;
            
            ans.push_back(distinct_count);
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
