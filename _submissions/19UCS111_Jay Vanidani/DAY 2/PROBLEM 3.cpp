/*
DAY-2:
PROBLEM 3:SQUARE ROOT OF INTEGER
LINK:https://www.interviewbit.com/problems/square-root-of-integer/
*/
int Solution::sqrt(int num) 
{
    
    if (num == 0)
    {
        return 0;
    }
    int start = 1;
    int end = num ;
    int ans;
    while (start <= end) 
    {
        int mid = (start + end) / 2;
        if (mid <= num / mid) 
        {
            start = mid + 1;
            ans = mid;
        } 
        else 
        {
            end = mid - 1;
        }
    }
    return ans;
}
