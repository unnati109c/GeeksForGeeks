bool find3Numbers(int A[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++) 
    {
        unordered_set<int> s;
        int curr_sum = sum - A[i];

        for (int j = i + 1; j < n; j++) 
        {
            if (s.find(curr_sum - A[j]) != s.end()) 
            {
               // A[i], A[j], curr_sum - A[j]
                return true;
            }
            s.insert(A[j]);
        }
    }
    return false;
}
