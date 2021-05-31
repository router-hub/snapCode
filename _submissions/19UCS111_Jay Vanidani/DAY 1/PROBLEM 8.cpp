/*
DAY-1:
PROBLEM 8:BALANCED PARANTHESES
LINK:https://www.interviewbit.com/problems/balanced-parantheses/
*/
int Solution::solve(string A)
{
    stack<char> stk;
    int n=A.size();
    char temp;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
        {
            stk.push(A[i]);
            continue;
        }
        if(stk.empty())
        {
            return 0;
        }
        temp=stk.top();
        stk.pop();
        if(A[i]==')')
        {
            if(temp!='(')
            {
                return 0;
            }
        }
    }
    return stk.empty();
}
