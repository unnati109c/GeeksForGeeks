/*
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotateArr(int vec1[], int d, int n)
    {
        int rotL=d; 
        std::rotate(vec1, vec1+rotL, vec1+n); 
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends