int Solution::braces(string A) {
    stack<char>st;
    for(int i=0;i<A.length();i++)
    {
        char temp=A[i];
        if(temp=='+'||temp=='-'||temp=='*'||temp=='/'||temp=='(')
        {
        st.push(temp);
        }
    }
    if(st.empty())
    return 0;
    int no_of_leftbraces=0;
    int no_of_operators=0;
    while(!st.empty())
    {
        if(st.top()=='(')
        {
            no_of_leftbraces+=1;
        }
        else
        {
            no_of_operators+=1;
        }
        if(no_of_leftbraces>no_of_operators)/*no operation between braces indicate redundancy*/
        return 1;
        st.pop();
    }
    return 0;
}
