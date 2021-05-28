/*
DAY-1:
PROBLEM 9:SUBSET
LINK:https://www.interviewbit.com/problems/subset/
*/
void solutionUtil(vector<int> &A,vector<vector<int>> &res,vector<int> &subset,int index)
{
    res.push_back(subset);
    for(int i=index;i<A.size();i++)
    {
        subset.push_back(A[i]);
        solutionUtil(A,res,subset,i+1);
        subset.pop_back();
    }
    return;
}
vector<vector<int>> Solution::subsets(vector<int> &A)
{
    int index=0;
    sort(A.begin(),A.end());
    vector<int> subset;
    vector<vector<int>> result;
    solutionUtil(A,result,subset,index);
    return result;
}
