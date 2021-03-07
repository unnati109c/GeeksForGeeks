/*Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array,
 x or y. If both elements have the same frequency, then return the smaller element.
Note:  We need to return the element, not its count.
Input:
N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5
Output: 4
Explanation: 
frequency of 4 is 4.
frequency of 5 is 1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)*/

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x, int y);

int main() {

    int t; // Testcases
    cin >> t; // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        cin >> n; // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;
             i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y; // declare x and y
        cin >> x >> y; // input x and y
        cout << majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}// } Driver Code Ends


int majorityWins(int arr[], int n, int x, int y) {
    int a=0, b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) a++;
        else if (arr[i]==y) b++;
    }
    if(a==b) 
    {
        return x<y?x:y;
    }
    else if(a<b) return y;
    else return x;
}