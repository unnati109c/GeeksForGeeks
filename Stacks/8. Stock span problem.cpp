vector <int> calculateSpan(int price[], int n)
    {
       vector<int>res(n, 1);
       stack<int>st;
       for(int i=0;i<n;i++)
       {
           while(!st.empty() and price[st.top()]<=price[i])
           {
               st.pop();
           }
           res[i]= st.empty()? i+1 : (i-st.top());
           st.push(i);
       }
       return res;
    }
