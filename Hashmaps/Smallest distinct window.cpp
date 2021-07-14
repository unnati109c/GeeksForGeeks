/* Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
For eg. A = “aabcbcdbca”, then the result would be 4 as of the smallest window will be “dbca”. 
Expected Time Complexity: O(256.N)
Expected Auxiliary Space: O(256)
*/

string findSubString(string str)
{

    int n = str.length();


    if (n <= 1)
        return str;


    // unordered_set<char>s;
    // for(auto i : str)
    //     s.insert(i);
    // int distinct_count = s.size();

    int distinct_count = 0;
    bool visited[256] = { false };
    for (int i = 0; i < n; i++) 
    {
        if (visited[str[i]] == false) 
        {
            visited[str[i]] = true;
            distinct_count++;
        }
    }


    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;

    //map<char,int>curr_count;
    int curr_count[256] = { 0 };
    for (int j = 0; j < n; j++) {

        curr_count[str[j]]++;

        if (curr_count[str[j]] == 1)
            count++;

        if (count == distinct_count) 
        {

            while (curr_count[str[start]] > 1) {
                if (curr_count[str[start]] > 1)
                    curr_count[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    return str.substr(start_index, min_len);

}
