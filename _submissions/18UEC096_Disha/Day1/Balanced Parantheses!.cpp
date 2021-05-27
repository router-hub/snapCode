//There can be 3 conditions for unvalid parenthesis , 1st there is no opening bracket for closing bracket i.e. checked by if(st.empty()) as stack contains opening brackets 
//if there is no opening bracket at left for current closing brackets, checked by else if(!st.empty()&&st.top()==')') as stack contains all the opening brackets in LIFO order
//We use stack as we want the last pushed opening bracket to pair with our current closing bracket & so on. 3rd condition where it is invalid is there are only opening brackets
//and no closing bracket. Eg "((" this is invalid and it is checked after if condition if any opening bracket remains in stack i.e. stack is empty or not as when we get a 
//counter closing bracket for our opeining bracket we pop it. So, if a opening bracket remains after the for loop that means it is not paired with a closing bracket and 
//it is invlaid expression.
//Instead of stack, a count variable can also be used.
int Solution::solve(string A) {
    if(A.size()==1)
        return 0;
    stack<char>st;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(')
        {
            st.push('(');
        }
        else if(A[i]==')')
        {
            if(st.empty())
                return 0;
            else if(!st.empty()&&st.top()=='(')
                st.pop();
            else if(!st.empty()&&st.top()==')')
                return 0;    
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}
