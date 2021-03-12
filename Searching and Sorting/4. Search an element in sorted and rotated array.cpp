#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll binary_search_on_rotated_sorted_array(ll arr[],ll start,ll end, ll t)
{
	
	while(start<=end)
	{
		ll mid = start + (end-start)/2;
		if(arr[mid]==t)
			return mid;
		else if(arr[start]<=arr[mid])
		{
			if(t>=arr[start] && t<arr[mid])
			{
				end = mid-1;
			}
			else
			{
				start = mid+1;
			}

		}
		else
		{
			if(t>arr[mid] && t<=arr[end])
			{
				start=mid+1;
			}
			else
			{
				end = mid-1;
			}
		}
	}
	return -1;
}

int main()
{
	ll a[]= {3,4,5,6,7,8,1,2};
	
	ll ans = binary_search_on_rotated_sorted_array(a,0,7,3);
    cout<<ans<<endl;
	
	return 0;
}