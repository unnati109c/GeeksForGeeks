/*Given an unsigned integer N. The task is to swap all odd bits with even bits. 
r example, if the given number is 23 (00010111), it should be converted to 43(00101011). 
Here, every even position bit is swapped with adjacent bit on the right side(even position
bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side.

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).
*/

#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    // function to swap odd and even bits
    unsigned int swapBits(unsigned int n)
    {
    	//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
        //We get all even bits of n.
    	unsigned int ev= n & 0xAAAAAAAA; 
    	//0x55555555 means 01010101010101010101010101010101 in binary.
    	//We get all odd bits of n.
    	unsigned int od= n & 0x55555555; 
    	
    	//Right Shifting the even bits obtained previously.
    	ev>>=1;
    	// Left Shifting the odd bits obtained previously.
    	od<<=1;
    	
    	//Doing bitwise OR of even and odd bits obtained and
    	//returning the final result.
    	return (ev | od);
    	
    }
};

int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends