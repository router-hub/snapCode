int Solution::solve(string s) {
    stack<char>st;
    int l = s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='(') st.push('(');
        else {
            if(st.size())
            st.pop();
            else return 0;}
    }
    
    if(st.size()) return 0;  return 1;
}
