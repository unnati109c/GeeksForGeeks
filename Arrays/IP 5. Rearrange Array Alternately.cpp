/*Given a sorted array of positive integers. Your task is to rearrange  
the array elements alternatively i.e first element should be max value, 
second should be min value, third should be second max, fourth should be second min and so on.

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/
// SIMILAR TO ---> 14. Rearrange an array with O(1) extra space

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void rearrange(long long *arr, int n) 
    { 
    	int max_idx = n - 1, min_idx = 0;
        int max_elem = arr[n - 1] + 1;
 
        for (int i = 0; i < n; i++) 
        {
        // at even index : we have to put maximum element
            if (i % 2 == 0) 
            {
                arr[i] += (arr[max_idx] % max_elem) * max_elem;
                max_idx--;
            }
        // at odd index : we have to put minimum element
            else 
            {
                arr[i] += (arr[min_idx] % max_elem) * max_elem;
                min_idx++;
            }
    	}
 
        // array elements back to it's original form
        for (int i = 0; i < n; i++)
            arr[i] = arr[i] / max_elem;
    	 
    }
};

int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends