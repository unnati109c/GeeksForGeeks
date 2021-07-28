/* Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Example 1:

Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,
5, 9}, the arrangement 9534330 gives the
largest value. */

static int myCompare( string X,  string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1 : 0;
}


string printLargest(vector<string> &arr) {

  sort(arr.begin(), arr.end(), myCompare);
  string ans="";
  for (int i = 0; i < arr.size(); i++)
      ans+=arr[i];
  
   return ans;
}
