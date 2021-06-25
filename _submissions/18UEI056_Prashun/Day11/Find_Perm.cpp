vector<int> Solution::findPerm(const string A, int B) {
    vector<int>ans;
    int s=1;
    for(int i=0;i<A.size();i++)
    { if(A[i]=='I')
    { ans.push_back(s);
        s++;
    }
    else
    {ans.push_back(B);
    B--;
    }
    }
    for(int j=s;j<=B;j++)
    ans.push_back(j);
    
    
    return ans;
}
