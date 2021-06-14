pair<int,int>inf=make_pair(-1,-1);
int find_h(int curr, vector<pair<int,int>>&Col)
{ int height=0;
    for(int i=0;i<Col.size();i++)
    { if(curr!=i && Col[i]!=inf)
    height=max(height,abs(curr-i+1));
    }
    return height;
}

int Solution::solve(vector<string> &A) {
    int n=A.size();
    int m=A[0].length();
    if(n<2 || m<2) return 0;
    vector<pair<int,int>>g(m,inf),b(m,inf),r(m,inf);
    for(int i=0;i<n;i++)
    { string s=A[i];
    for(int j=0;j<m;j++)
    { if(s[j]=='g')
    {if(g[j].first==-1) g[j].first=i;
        g[j].second=i;
    }if(s[j]=='b')
    {if(b[j].first==-1) b[j].first=i;
        b[j].second=i;
    }
    else
    {if(r[j].first==-1) r[j].first=i;
        r[j].second=i;
    }
    }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {int r_b=-1,r_g=-1,b_g=-1;
    if(r[i]!=inf && b[i]!=inf)
    r_b=max(abs(r[i].first-b[i].second),abs(r[i].second-b[i].first));
    if(r[i]!=inf && g[i]!=inf)
    r_g=max(abs(r[i].first-g[i].second),abs(r[i].second-g[i].first));
    if(b[i]!=inf && g[i]!=inf)
    b_g=max(abs(g[i].first-b[i].second),abs(g[i].second-b[i].first));
    
    int curr_side=max(r_b,max(r_g,b_g));
    if(curr_side<0) continue;
  int height=0;
    if(curr_side==b_g)
height=find_h(i,r);
    if(curr_side==r_b)
height=find_h(i,g);
    if(curr_side==r_g)
height=find_h(i,b);

int curr_area=curr_side+1;
curr_area*=height;
ans=max(ans,curr_area);
    
    }
    return ans;
}
