/* Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. 
If two numbers have the same frequency then the larger number should be given preference. 

Input:
nums = {1,1,1,2,2,3},
k = 2
Output: {1, 2} */

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        
        for(auto i : nums)
        {
            m[i]++;
        }
        
        vector<pair<int,int>>v;
        copy(m.begin(), m.end(), back_inserter(v));
        
        sort(v.begin(), v.end(), []
        (const pair<int,int>&a, const pair<int,int>&b)
        {
            if(a.second==b.second)
                return a.first>b.first;
            return a.second>b.second;
        }
        );
        
        int count=0;
        for(auto i : v)
        {
            ans.push_back(i.first);
            count++;
            if(count==k) break;
        }
        
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
