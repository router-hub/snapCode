vector<int> Solution::flip(string A) {
    int n=A.size();
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    { if(A[i]=='0')
        arr[i]=1;
        else arr[i]=-1;
    }
    pair<int,int>ip=make_pair(INT_MAX,INT_MIN);
    int l=0, best_till=0,best_here=0;
    for(int i=0;i<n;i++)
    { if(arr[i]+best_here<0)
        { l=i+1;
            best_here=0;
        }
        else
        best_here+=arr[i];
        if(best_here>best_till)
        {best_till=best_here;
            ip.first=l;
            ip.second=i;
        }
    }
    if(ip.first==INT_MAX)
    return {};
    return {ip.first+1,ip.second+1};
}
