vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>ans;
     vector<int>ex;
    for(int i=0;i<A;i++)
    { vector<int>tmp(i+1);
     for(int j=0;j<i+1;j++)
     { if(j==0 || j==i)
         tmp[j]=1;
        else
        tmp[j]=ex[j]+ex[j-1];
     }
        ex=tmp;
        ans.push_back(tmp);
    }
    return ans;
    }
