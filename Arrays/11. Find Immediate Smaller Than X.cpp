/*Given an array arr[] of size N containing positive integers and an integer X, find the element in the array which is smaller than X and closest to it.
Input:
N = 5
arr[] = {4 67 13 12 15}
X = 16
Output: 15
Explanation: For a given value 16, there are four values which are smaller than
it. But 15 is the number which is smaller and closest to it with minimum difference
of 1.
Input:
N = 5
arr[] = {1 2 3 4 5}
X = 1
Output: -1
Explanation: No value is smaller than 1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int x)
{
    int ele = -1;
    int diff = INT_MAX;

    for (int i = 0; i < n; i++)
        if (arr[i] < x and  (x - arr[i])< diff){
                ele = arr[i];
                diff = x - arr[i];
        }
        
    return ele;
    
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	return 0;
}
 