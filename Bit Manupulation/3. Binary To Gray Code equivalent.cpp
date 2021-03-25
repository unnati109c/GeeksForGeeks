/*Gray code has property that two successive numbers differ in only one bit.
You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

*/

int greyConverter(int n)
{
    return n ^ (n >> 1);
}