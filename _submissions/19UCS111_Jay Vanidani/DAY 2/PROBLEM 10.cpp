/*
DAY-2:
PROBLEM 10:LARGEST CONTINUOUS SEQUENCE ZERO SUM
LINK:https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/
*/
vector<int> Solution::lszero(vector<int> &A) 
{
    unordered_map<int,int> hm;
    vector<int> ans;
    hm[0]=-1;
    int sum=0;
    int n=A.size();
    int sIndex=0,eIndex=0;
    int maxLength=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(hm.find(sum)!=hm.end())
        {
            int diff=i-hm[sum];
            if(diff>maxLength)
            {
                sIndex=hm[sum]+1;
                eIndex=i;
                maxLength=diff;
            }
        }
        else
        {
            hm[sum]=i;
        }
    }
    for(int i=sIndex;i<=eIndex;i++)
    {
        ans.push_back(A[i]);
    }
    if(ans.size()==1 && ans[0]!=0)
    {
        ans.clear();
    }
    return ans;
}
