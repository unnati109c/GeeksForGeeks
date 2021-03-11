//  https://leetcode.com/problems/find-peak-element/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findPeakElement(vector<int>& nums) 
{
    int low=0;
    int high=nums.size()-1;
        
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[mid+1])
            high=mid;
        else
            low=mid+1;
    }
        
    return low;
}

int main()
{
	vector<int>n {1,2,3,1};
	cout<<findPeakElement(n);
}