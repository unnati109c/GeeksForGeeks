/*Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it 
is equal to the sum of elements after it.

Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case equilibrium point is at position 3 
as elements before it (1+3) = elements after it (2+2).

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)*/

/*The idea is to get the total sum of the array first. 
Then Iterate through the array and keep updating the left sum which is initialized as zero.
In the loop, we can get the right sum by subtracting the elements one by one.
*/

#include <iostream>
using namespace std;

class Solution{
    public:
  
    int equilibriumPoint(long long a[], int n) {
    
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++)
        {
            rightsum+=a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            rightsum-=a[i];
            if(leftsum==rightsum)
            return i+1;
            leftsum+=a[i];
            
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends