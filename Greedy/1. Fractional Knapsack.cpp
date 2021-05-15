/* Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 
Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.  */

class Solution
{
    public:
    
    static bool cmp(Item a, Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
     
        int curWeight = 0; 
        double finalvalue = 0.0; 
     
        for (int i = 0; i < n; i++) 
        {
            
            if (W>0 and arr[i].weight<=W)
            {
                W -= arr[i].weight;
                finalvalue += arr[i].value;
            }
            else 
            {
                finalvalue += arr[i].value * ((double)W / (double)arr[i].weight);
                break;
            }
        }
        return finalvalue;
        }
            
};
