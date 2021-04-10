/* Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
the consecutive numbers can be in any order.

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_set<int>s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        int longestStreak=0;
        for(int i=0;i<n;i++)
        {
            int current= arr[i];
            int currentStreak=1;
            if(!s.count(arr[i]-1))
            {
                while(s.count(current+1))
                {
                    current+=1;
                    currentStreak+=1;
                }
            }
            longestStreak= max(longestStreak, currentStreak);
        }
        return longestStreak;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
