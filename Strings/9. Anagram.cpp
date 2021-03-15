/*Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, 
only the order of characters can be different. 

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with same frequency. So, 
both are anagrams.

Expected Time Complexity: O(|a|+|b|).
Expected Auxiliary Space: O(Number of distinct characters). */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    bool isAnagram(string str1, string str2){
        
        int n1 = str1.length(); 
        int n2 = str2.length(); 
       
        if (n1 != n2) 
            return false; 
      
        sort(str1.begin(), str1.end()); 
        sort(str2.begin(), str2.end()); 
      
        for (int i = 0; i < n1; i++) 
            if (str1[i] != str2[i]) 
                return false; 
      
        return true; 
        
    }

};

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}