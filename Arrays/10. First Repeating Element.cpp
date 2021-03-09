/*Given an array arr[] of size N, find the first repeating element. 
The element should occurs more than once and the index of its first occurrence should be the smallest.
Input:
N = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and its first appearence is at index 2 
which is less than 3 whose first occuring index is 3.

Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(N)
*/

#include<bits/stdc++.h>
using namespace std;

int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}

int firstRepeated(int arr[], int n) {
    map<int,int>count;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[arr[i]]>1) 
        return i+1;
    }
    return -1;
}
