string Solution::solve(string A) {
string res ="";
stack<string>st;
for(int i=0;i<A.size();i++)
{
if(A[i] !=' ')res += A[i];
else if(A[i] ==' ' || i == A.size() - 1)
{
st.push(res);
res = "";
}

}
st.push(res);
A="";
while(!st.empty())
{
string t=st.top();
if(t!="")
A += st.top() + " ";
st.pop();
}

return A.substr(0,A.size()-1);}
