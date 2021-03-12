/*Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k, the task is to find the index of k, if it’s present in the array Arr[]. Otherwise, find the index where k must be inserted to keep the array sorted.

Input:
N = 4
Arr = {1 , 3, 5, 6}
k = 5
Output: 2
Explaination: Since 5 is found at index 2 as arr[2] = 5, the output is 2.

Input:
N = 4
Arr = {1, 3, 5, 6}
k = 2
Output: 1
Explaination: Since 2 is not present in the array but can be inserted at index 1 
to make the array sorted.

N = 8
Arr = -12 -11 -3 5 6 15 16 18
k = 19
Output=8

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int ans=0;
        int l=0, r= arr.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(arr[mid]==k)
            return mid;
            else if(mid==n-1)
            return n;
            else if(arr[mid]<k)
            {
                
                l=mid+1;
            }
            else
            {
                ans=mid;
                r=mid-1;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends