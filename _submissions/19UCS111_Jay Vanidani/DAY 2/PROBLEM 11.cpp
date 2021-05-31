/*
DAY-2:
PROBLEM 11:N-MAX PAIR COMBINATIONS
LINK:https://www.interviewbit.com/problems/n-max-pair-combinations/
*/
vector<int> Solution::solve(vector<int> &A, vector<int> &B) 
{
    priority_queue<pair<int,pair<int,int>>> hm;
    set<pair<int,int>> s;
    int n=A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    hm.push(make_pair(A[n-1]+B[n-1],make_pair(n-1,n-1)));
    s.insert(make_pair(n-1,n-1));
    vector<int> ans;
    int k=n;
    while(k--)
    {
        pair<int,pair<int,int>>top=hm.top();
        hm.pop();
        ans.push_back(top.first);
        int left=top.second.first;
        int right=top.second.second;
        if(right>0 && left>=0 && s.find(make_pair(left,right-1))==s.end())
        {
            hm.push(make_pair(A[left]+B[right-1],make_pair(left,right-1)));
            s.insert(make_pair(left,right-1));
        }
        if(right>=0 && left>0 && s.find(make_pair(left-1,right))==s.end())
        {
            hm.push(make_pair(A[left-1]+B[right],make_pair(left-1,right)));
            s.insert(make_pair(left-1,right));
        }
    }
    return ans;
}
