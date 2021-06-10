bool isOperator(char x)
{ if(x=='+'||x=='-'||x=='*'||x=='/')
 return true;
 return false;
    
}

int Solution::braces(string A) {
    stack<char>s;
    for(int i=0;i<A.size();i++)
    { if(A[i]=='(')
     s.push('(');
     else if(isOperator(A[i]) && s.size()>0)
      s.pop();
    }
if(s.empty()) return 0;
else return 1;
    
}
