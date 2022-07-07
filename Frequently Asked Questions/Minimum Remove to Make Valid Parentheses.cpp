//T.C = O(n)    S.C = O(n)
string minRemoveToMakeValid(string s) {
    string res = "";    int close = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ')')
        {
            close++;
        }
    }
    int i=0;    int open = 0;
    while(i < s.length())
    {
        if(s[i] == '(' && close > 0)
        {
            res += '(';     open++; close--;
        }
        else if(s[i] == ')')
        {
            if(open > 0){
                res += ')';
                open--;
            }
            else{
                close--;
            }
            
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            res += s[i];
        }
        i++;
    }
    return res;
}

//stack and placeholder


string minRemoveToMakeValid(string s) {
    stack<int>st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(i);
        }
        else if(s[i] == ')')
        {
            if(!st.empty())
            {
                st.pop();
            }
            else{
                s[i] = '*';
            }
        }
    }
    while(!st.empty())
    {
        s[st.top()] = '*';
        st.pop();
    }
    
    s.erase(remove(s.begin(), s.end(), '*'), s.end());
    return s;
}