/*  Given an array of positive integers and an integer. Determine whether or not there exist two elements in A whose sum is exactly equal to that integer.

Example 1:

Input:
N = 6, X = 16
A[] = {1,4,45,6,10,8}
Output: Yes
Explanation: 10 and 6 are numbers making a pair whose sum is equal to 16.  */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
    public:
    bool keypair(vector<int> arr, int n, int sum)
    {
        set<int>s;
        
        for(int i=0;i<n;i++)
        {
            int temp = sum - arr[i];
            
            if(s.find(temp)==s.end())
            {
                s.insert(arr[i]);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> array(n);
        Solution ob;
        
        for (int i = 0; i < n; i++) cin >> array[i];
            cout << (ob.keypair(array, n, x) ? "Yes" : "No") << "\n";
    }
    return 0;
}
