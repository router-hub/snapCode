vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
// A.resize(distance(A.begin(),unique(A.begin(),A.end())));
// B.resize(distance(B.begin(),unique(B.begin(),B.end())));
// C.resize(distance(C.begin(),unique(C.begin(),C.end())));
unordered_set<int>s(A.begin(),A.end());
A.assign(s.begin(),s.end());
unordered_set<int>s1(B.begin(),B.end());
B.assign(s1.begin(),s1.end());
unordered_set<int>s2(C.begin(),C.end());
C.assign(s2.begin(),s2.end());

map<int,int>m;

for(int i=0;i<A.size();i++)
{m[A[i]]++;
}
for(int i=0;i<B.size();i++)
{m[B[i]]++;
}
 for(int i=0;i<C.size();i++)
{m[C[i]]++;
} 
vector<int>ans;
for(auto i=m.begin();i!=m.end();i++)
{ if(i->second>=2)
    ans.push_back(i->first);
}
 return ans;   
}
