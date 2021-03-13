/*Given a sorted array with possibly duplicate elements. 
The task is to find indexes of first and last occurrences of an element X in the given array.
Note: If the element is not present in the array return {-1,-1} as pair.

Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
X = 5
Output:
2 5
Explanation:
Index of first occurrence of 5 is 2 and index of last occurrence of 5 is 5.
 
Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 7, 123, 125}
X = 7
Output:
6 6

Expected Time Complexity: O(Log(N))
Expected Auxiliary Space: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        if (binary_search(v.begin(),v.end(),x))
        return make_pair(lower_bound(v.begin(),v.end(),x)-v.begin(), upper_bound(v.begin(),v.end(),x)-v.begin()-1);
    
        return {-1,-1};
    }
};

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends