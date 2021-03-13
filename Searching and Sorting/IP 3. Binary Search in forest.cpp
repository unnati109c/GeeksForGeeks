/*There are n tree in a forest. Heights of the trees is stored in array tree[ ]. 
If ith tree is cut at height h, the wood obtained is tree[i]-h, given that tree[i]>h. 
If total wood needed is k (not less, neither more) find the height at which every tree
should be cut (all trees have to be cut at the same height).

Input:
N = 5, K = 4
tree[] = {2, 3, 6, 2, 4}
Output: 3
Explanation: Wood collected by cutting trees 
at height 3 = 0 + 0 + (6-3) + 0 + (4-3) = 4
hence 3 is to be subtracted from all numbers.
Since 2 is lesser than 3, nothing gets subtracted from it.

Expected Time Complexity: O(N log H)
Expected Auxiliary Space: O(1)*/



#include <bits/stdc++.h>
using namespace std;

int find_height(int tree[], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;

        cout<< find_height(tree,n,k) << endl;
    }
    return 1;
}// } Driver Code Ends

// Function to return the amount of wood collected if the cut is made at height m(mid) 
int woodCollected(int height[], int n, int m) 
{ 
    int sum = 0; 
    for (int i = n - 1; i >= 0; i--) { 
        if (height[i] - m <= 0) 
            break; 
        sum += (height[i] - m); 
    } 
    return sum; 
} 
  
// Function that returns Height at which cut should be made 
int find_height(int height[], int n, int k) 
{ 
    // Sort the heights of the trees 
    sort(height, height + n); 
  
    // The minimum and the maximum cut that can be made 
    int low = 0, high = height[n - 1]; 
  
    // Binary search to find the answer 
    while (low <= high) { 
        int mid = low + ((high - low) / 2); 
  
        // The amount of wood collected when cut is made at the mid 
        int collected = woodCollected(height, n, mid); 
  
        // If the current collected wood is equal to the required amount 
        if (collected == k) 
            return mid; 
  
        // If it is more than the required amount then the cut needs to be made at a 
        // height higher than the current height 
        if (collected > k) 
            low = mid + 1; 
  
        // Else made the cut at a lower height 
        else
            high = mid - 1; 
    } 
  
    return -1; 
} 