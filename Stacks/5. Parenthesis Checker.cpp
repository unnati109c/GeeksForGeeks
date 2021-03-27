bool ispar(string str)
{
    stack<char>s;
    for(char ch : str)
    {
		if(ch=='(' || ch == '{' || ch == '[')
			s.push(ch);
		else
		{
			if(s.empty()) 
				return false;

            char t = s.top();
            if((ch=='}' && t!='{') || (ch==']' && t!='[') || (ch==')' && t!='('))
                return false;
            s.pop();
		}
    }

	if(s.empty())
        return true;
    else
        return false;
    
}