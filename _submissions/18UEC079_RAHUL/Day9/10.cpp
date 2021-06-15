vector<int> Solution::equal(vector<int> &A) {
    int n=A.size();
    map<int,vector<pair<int,int>>>m;
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            int sum=A[i]+A[j];
            m[sum].push_back(make_pair(i,j));
        }
    }
    //cout<<"l "<<m.size()<<" k"<<endl;
    int i1=-1,i2,i3,i4;
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=A[i]+A[j];
            if(m.find(sum)!=m.end())
            {
                auto it=m.find(sum);
                for(auto temp=it->second.begin();temp!=it->second.end();temp++)
                if(temp->first>i && temp->second>temp->first && j!=temp->first&& j!=temp->second)
                {
                    i1=i;
                    i2=j;
                    // i3=min(i3,temp->first);
                    // i4=min(i4,temp->second);
                    i3=temp->first;
                     i4=temp->second;
                    //return {i,j,temp->first,temp->second};
                     return {i1,i2,i3,i4};
                }
               
            }
            // else
            // m[sum]=make_pair(i,j);
        }
    }
    // if(i1!=-1)
    // {
    //      return {i1,i2,i3,i4};
    // }
    return {};
}
