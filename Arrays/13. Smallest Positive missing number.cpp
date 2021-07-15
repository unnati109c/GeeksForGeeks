/*Given an array arr[] of size N, find the smallest positive number missing from the array.
Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

//METHOD 1   
int findMissing(int arr[], int n) { 
    sort(arr, arr+n);
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;
    int k=0;
    while(arr[k]<0)
    k++;
    if(arr[k]!=0 and arr[k]!=1) return 1;  // -7 -5 8 9 then o/p : 1
    for(int i=k;i<n-1;i++)
    {
        if(arr[i]==arr[i+1]) continue;  // -9 -2 0 1 1 2 4 then o/p : 3
        if((arr[i]+1)!=arr[i+1])
        {
            return arr[i]+1;
        }
    }
    return arr[n-1]+1;
}

//METHOD 2

int missingNumber(int arr[], int n) 
    { 
       for(int i=0;i<n;i++)
       {
           while( (arr[i]>=1 and arr[i]<=n) and (arr[i]!=arr[arr[i]-1]) )
           {
               swap(arr[i], arr[arr[i]-1]);
           }
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]!=i+1)
           return i+1;
       }
       return n+1;
       
    } 
