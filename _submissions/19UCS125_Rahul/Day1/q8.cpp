int Solution::solve(string s) {
    stack<char> st;
    int n = s.length();
    for(int i=0; i<n; ++i) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) {
        return 1;
    }
    else {
        return 0;
    }
}
