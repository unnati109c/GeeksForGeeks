//https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/

/*
The idea is to consider prime factors of a factorial n.
A trailing zero is always produced by prime factors 2 and 5.
We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. 
So if we count 5s in prime factors, we are done. 
*/
#include <iostream>
using namespace std;

int findTrailingZeros(int n)
{
	int count = 0;
	for (int i = 5; i<=n; i *= 5)
		count += n / i;
	return count;
}

int main()
{
	int n = 100;
	cout <<findTrailingZeros(n);
	return 0;
}
