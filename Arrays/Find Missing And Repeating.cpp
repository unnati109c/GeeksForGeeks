/* Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1. */

class Solution{
public:
    int ans[2];
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==2)
            {
                ans[0]=arr[i];
            }
        }
        
        for(int i=1; i<=n;i++)
        {
            if(m.find(i)==m.end())
            {
                ans[1]=i;
                break;
            }
        }
        
        return ans;
        
    }
};
