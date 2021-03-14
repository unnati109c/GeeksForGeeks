/*Given an array A of N elements. Find the majority element in the array.
 A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in {1,2,3} appears only once so there is no majority element.

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more than N/2 times, so it is the majority element.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    int majorityElement(int a[], int n)
    {
        if(n==1) return a[0];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        
        for (auto i : m) 
        {
            if(i.second>n/2)
            return i.first;
        }
        return -1;
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends