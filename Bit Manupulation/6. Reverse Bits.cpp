/*Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Example 1:

Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.

*/

long long reversedBits(long long X) {
        
        uint32_t res = 0;
        for(int i = 0; i < 32; i++)
        {
            if(X & (1 << i)) 
            {
                res |= (1 << (31-i));
            }
        }
        return res;
    }