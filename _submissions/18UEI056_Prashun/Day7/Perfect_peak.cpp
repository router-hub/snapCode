int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    /*int min_arr[n];
    int max_arr[n];
    max_arr[0]=A[0];
    min_arr[n-1]=A[n-1];
    for(int i=1;i<n;i++)
    {
        max_arr[i]=max(A[i],max_arr[i-1]);
    }
    for(int j=n-2;j>=0;j--)
    {
        min_arr[j]=min(A[j],min_arr[j+1]);
    }
    for(int i=1;i<n-1;i++)
    { if(A[i]>max_arr[i-1] && A[i]<min_arr[i+1])
        return 1;
    }
    return 0;*/
    unordered_set<int>s;
    int max=A[0],min=A[n-1];
    for(int i=1;i<n;i++)
    {if(A[i]>max)
        {max=A[i];
        s.(i);}
    }
    for(int j=n-2;j>=0;j--)
    { if(A[j]<min)
        {min=A[j];
            if(s.find(j)!=s.end())
              return 1;
        }
    }
    return 0;
}
