int Solution::solve(vector<int> &A, int B) {
    int count=0;
    
    // for(int i=0;i<A.size();i++)
    // { int xr=A[i];
    // if(xr==B)
    // { count++;
    //     // continue;
    // }
    // for(int j=i+1;j<A.size();j++)
    //     {
    //         xr=xr^A[j];
    //           if(xr==B)
    //             count++;
    //     }
    // }
    unordered_map<int,int>m;
    int xr=0;
    for(int i=0;i<A.size();i++)
    { xr^=A[i];
     if(xr==B) count++;
     if(m.find(xr^B)!=m.end())
        count+=m[xr^B];
        m[xr]++;
    }
    return count;
}
