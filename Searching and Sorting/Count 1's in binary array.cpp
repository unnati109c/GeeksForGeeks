/* Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

Example 1:

Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
Explanation: Number of 1's in given 
binary array : 1 1 1 1 1 0 0 0 is 5. 

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).  */

int countOnes(int arr[], int n)
{
    //Your code here
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==0)
        {
            high=mid-1;
        }
        else if(arr[mid]==1)
        {
            if(arr[mid+1]==0 || mid==n-1)
            {
                return mid+1;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    return low;
}
