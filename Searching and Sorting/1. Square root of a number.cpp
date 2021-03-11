/*Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).
Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.
*/
#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
      long long int l = 0, r=x , mid, ans;
      
      while(l<=r)
      {
          mid = (l+r)/2;
          if(mid*mid==x)
          {
              return mid;
          }
          else if(mid*mid<x)
          {
              l=mid+1;
              ans = mid;
          }
          else
          {
              r=mid-1;
          }
      }
      return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
