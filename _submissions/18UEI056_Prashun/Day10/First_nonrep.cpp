string Solution::solve(string A) {
   string B ="";
queue<char>q;
int count[26] = {0};

// now we need to traverse over whole string
for(int i=0;i<A.size();i++){
q.push(A[i]);
count[A[i]-'a']++;
while(!q.empty()){
if(count[q.front()-'a']>1){
q.pop();
}
else{
B.push_back(q.front());
break;
}
}
if(q.empty()){
B.push_back('#');
}
}
return B;
}
