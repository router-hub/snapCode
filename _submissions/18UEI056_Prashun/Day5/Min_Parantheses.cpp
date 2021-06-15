int Solution::solve(string A) {
    stack<int>s;
int k=0;
for(int i=0;i<A.length();i++){
if(A[i]=='('){
s.push(A[i]);
}
else{
if(!s.empty()){
s.pop();
}
else{
k++;
}
}
}
return s.size()+k;
}
