string Sequence(string arr[], string input)
{
    string output = "";
    int n = input.length();
  
    for (int i=0; i<n; i++)
    {
        if (input[i] == ' ')
            output = output + "0";
        else
        { 
            int position = input[i]-'A';
            output = output + arr[position];
        }
    }
    return output;
}

string printSequence(string S)
{ 
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
 
    
    return Sequence(str, S);
}
