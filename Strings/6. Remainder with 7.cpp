//  https://www.geeksforgeeks.org/remainder-7-large-numbers/#:~:text=let%20us%20take%20above%20Example,the%20number%2012345%20by%207.
/*Given a number as string(n) , find the remainder of the number when it is divided by 7

Intuition : 
1  % 7 = 1
10 % 7 = 3
100 % 7 = 2
1000 % 7 = 6 = (-1) % 7
10000 % 7 = 4 = (-3) % 7
100000 % 7 = 5 = (-2) % 7

The series repeats itself for larger powers
1000000 % 7 = 1
10000000 % 7 = 3
..............
...............

The above property of modular division with 7 and 
associative properties of modular arithmetic are 
the basis of the approach used here.

We reverse the number from end and series from 
the beginning and keep adding multiplication to
the result.
(12345 % 7) = (5*1 + 4*3 + 3*2 + 2*(-1) + 1*(-3)) % 7
            = (5 + 12 + 6 - 2 - 3)%7
            = (18) % 7
            = 4
hence 4 will be the remainder when we divide
the number 12345 by 7. 
*/

#include <iostream>
using namespace std;
int remainderWith7(string );

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;

cout<<remainderWith7(n)<<endl;

}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int remainderWith7(string num)
{
    // This series is used to find remainder with 7 
    int series[] = {1, 3, 2, -1, -3, -2}; 
  
    // Index of next element in series 
    int series_index = 0; 
  
    int result = 0;  // Initialize result 
  
    // Traverse num from end 
    for (int i=num.size()-1; i>=0; i--) 
    { 
        /* Find current digit of num */
        int digit = num[i] - '0'; 
  
        // Add next term to result 
        result += digit * series[series_index]; 
  
        // Move to next term in series 
        series_index = (series_index + 1) % 6; 
  
        // Make sure that result never goes beyond 7. 
        result %= 7; 
    } 
  
    // Make sure that remainder is positive 
    if (result < 0) 
      result = (result + 7) % 7; 
  
    return result; 
}
