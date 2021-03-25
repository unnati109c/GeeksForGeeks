int grayToBinary(int n)
{
    int res = n;
    while (n > 0) 
    {
        n >>= 1;
        res ^= n;
    }
    return res;
}