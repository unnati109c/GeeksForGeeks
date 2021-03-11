/*Given an array of size N, find the smallest positive integer value that 
cannot be represented as sum of some elements from the array.
Input: 
N = 6
array[] = {1, 10, 3, 11, 6, 15}
Output: 
2
Explanation:
2 is the smallest integer value that cannot be represented as sum of elements from the array.

Input: 
N = 3
array[] = {1, 1, 1}
Output: 
4
Explanation: 
1 is present in the array. 
2 can be created by combining two 1s.
3 can be created by combining three 1s.
4 is the smallest integer value that cannot be represented as sum of elements from the array.

Expected Time Complexity: O(N * Log(N))
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
        long long target=1, cur_sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=target)
            {
                cur_sum+=arr[i];
                target=cur_sum+1;
            }
            else
            return target;
        }
        return target;
    } 
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 
  // } Driver Code Ends