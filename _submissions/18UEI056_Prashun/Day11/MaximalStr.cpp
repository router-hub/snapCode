/*void backtrack(string &A,int B,int s,vector<string>&temp)
{ if(s==B)
{temp.push_back(A);
    return;
}
for(int i=s;i<A.size();i++)
{swap(A[i],A[s]);
backtrack(A,B,s+1,temp);
    swap(A[i],A[s]);
}
    
}

string Solution::solve(string A, int B) {
    // int temp=0;
    vector<string>temp;
    backtrack(A,B,0,temp);
    int maxv=INT_MIN;
    for(int i=0;i<temp.size();i++)
    {//  cout<<temp[i]<<" ";
        maxv=max(maxv,stoi(temp[i]));
    }
    
    string ans=to_string(maxv);
    return ans;
}*/
set<string>s;

void rec(string A,int B){
if(B==0){s.insert(A);return;}
for(int i=0;i<A.size();i++)
{for(int j=i;j<A.size();j++)
{
swap(A[i],A[j]);
rec(A,B-1);
swap(A[i],A[j]);
}
}
}

string Solution::solve(string A, int B) {
s.clear();
rec(A,B);
auto it=s.end();
it--;
return *it;
}
