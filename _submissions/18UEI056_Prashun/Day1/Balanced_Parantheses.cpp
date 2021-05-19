int Solution::solve(string A) {
    int count=0;
    int n=A.size();
    stack<char>s;
    for(int i=0;i<n;i++)
    { s.push(A[i]);
    }
 while(!s.empty())
    { char x=s.top();
    s.pop();
    if(x==')')
    count++;
    if(x=='(')
    count--;
      if(count<0)
      return 0;
    }
    if(count==0)
    return 1;
    else
    return 0;
}
