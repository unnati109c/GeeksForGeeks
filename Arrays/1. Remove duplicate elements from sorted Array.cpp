/*Given a sorted array A of size N, delete all the duplicates elements from A.
Input  : arr[] = {2, 2, 2, 2, 2}
Output : arr[] = {2}
         new size = 1

Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
Output : arr[] = {1, 2, 3, 4, 5}
         new size = 5*/

//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int remove_duplicate(int arr[],int n){
       if (n==0 || n==1) 
        return n; 
 
        int j = 0; 
  
        for (int i=0; i < n-1; i++) 
            if (arr[i] != arr[i+1]) 
                arr[j++] = arr[i]; 
  
        arr[j++] = arr[n-1]; 
  
        return j; 
        
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  
