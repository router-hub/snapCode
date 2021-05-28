/*
DAY-1:
PROBLEM 6:PAIR WITH GIVEN DIFFERENCE
LINK:https://www.interviewbit.com/problems/pair-with-given-difference/
*/
int Solution::solve(vector<int> &A, int B) 
{
    sort(A.begin(),A.end());
    unordered_map<int,int>mp;
    for(auto i:A)
    {
        if(mp[i+B]||mp[i-B])
        {
            return 1;
        }
        else
        {
            mp[i]++;
        }
    }
    return 0;
}

