/* Given a positive integer N. You have to find Nth natural number after removing all the numbers containing digit 9.
Input:
N = 9
Output:
10
Explanation:
After removing natural numbers which contains
digit 9, first 9 numbers are 1,2,3,4,5,6,7,8,10
and 9th number is 10. */

long long findNth(long long N)
{
    // code here.
    long long result = 0;

    long long p = 1;
    while (N > 0) {
        result += (p * (N % 9));
        N = N / 9;
        p = p * 10;
    }
    return result;
}
