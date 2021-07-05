int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>m;
    int cur_sum=0,count=0;
    for(int i=0;i<A.size();i++)
    { if(A[i]%2==0) A[i]=0;
     else
     A[i]=1;
    }
    for(int i=0;i<A.size();i++)
    { cur_sum+=A[i];
     if(cur_sum == B) count += 1;
    if(m.find(cur_sum-B)!=m.end())
       { count+=m[cur_sum-B];
    } m[cur_sum]++;
    }
   return count;
}
