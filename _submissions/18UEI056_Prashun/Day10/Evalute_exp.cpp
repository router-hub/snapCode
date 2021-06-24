/*bool isOperator(string a)
{ if(a=="+"||a=="*"||a=="-"||a=="/")
    return true;
else
return false;
}
string opSum(string a,string b,string op)
{ int n1=stoi(a);
  int n2=stoi(b);
//   n1=max(n1,n2);
//   n2=min(n1,n2);
 if(op=="+")
 return to_string(n1+n2);
  if(op=="-")
  return to_string(abs(n1-n2));
  if(op=="*")
  return to_string(n1*n2);
  
  if(op=="/")
  { int x=max(n1,n2);
    int y=min(n1,n2);
  return to_string(floor(x/y)); 
  }
    
}

int Solution::evalRPN(vector<string> &A) {
    int n=A.size();
    // string a="",b="";
    stack<string>s;
    for(int i=0;i<n;i++)
    {string a="",b="";
        if(!isOperator(A[i]))
         s.push(A[i]);
        else
        { a=s.top();s.pop();
          b=s.top();s.pop();
            s.push(opSum(a,b,A[i]));
        }
    }
    string c=s.top();s.pop();
    return stoi(c);
}*/
int Solution::evalRPN(vector<string> &A) {
stack<string>k;
for(int i = 0; i < A.size(); i++)
    if(A[i] == "/" || A[i] == "*" || A[i] == "+" || A[i] == "-") {
        int y = stoi(k.top());k.pop();
        int x = stoi(k.top());k.pop();
        switch(A[i][0]) {
            case '+':  k.push(to_string(x + y));break;
            case '-':  k.push(to_string(x - y));break;
            case '*':  k.push(to_string(x * y));break;
            case '/':  k.push(to_string(x / y));break;
        }
    }
    else k.push(A[i]);
    
return stoi(k.top());
}
