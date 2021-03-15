#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<vector<int>> v
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }    
        cout << endl;
    }
    
    vector<vector<int>> vect
    {
        /* Element one with 2 values in it. */
        {1, 2}, 
       
        /* Element two with 3 values in it. */
        {4, 5, 6}, 
       
         /* Element three with 4 values in it. */
        {7, 8, 9, 10} 
    };
    for (int i = 0; i < vect.size(); i++) 
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
 
    return 0;
}

