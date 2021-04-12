/* Input:
N = 5
Arr = {10 , 2, -2, -20, 10}
k = -10
Output: 3
Explaination: 
Subarrays: arr[0...3], arr[1...4], arr[3..4] have sum exactly equal to -10. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findSubArraySum(int arr[], int n, int k)
    {
        unordered_map<int,int>m;
        int sum=0, count=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==k)
            count++;
            
            if(m.find(sum-k)!=m.end())
            {
                count+=m[sum-k];
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
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
