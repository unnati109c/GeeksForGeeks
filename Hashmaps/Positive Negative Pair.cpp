/*   Given an array of distinct integers, find all the pairs having both negative and positive values of a number in the array.
The pair that appears first in A[] should appear first in the returning list and within the pair the negative integer should appear before positive integer.

Example 1:

Input:
n = 8
arr[] = {1,3,6,-2,-1,-3,2,7}
Output: -1 1 -3 3 -2 2
Explanation: 1, 3 and 2 are present 
pairwise postive and negative. 6 and 
7 have no pair.
Example 2:

Input:
n = 3
arr[] = {3,2,1}
Output: 0
Explanation: No such pair exists so the 
output is 0.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)  */

 vector <int> findPairs(int arr[], int n) 
{
    unordered_map<int,int>m;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        m[abs(arr[i])]++;

    }
    for(int i=0;i<n;i++)
    {
        if((m[abs(arr[i])])==2)
        {

            m[abs(arr[i])]=-1;
        }
        else if((m[abs(arr[i])])==-1)
        {
            ans.push_back(-1*abs(arr[i]));
            ans.push_back(abs(arr[i]));
        }
    }

    return ans;

}
