int Solution::solve(string A) 
{
    int count = 0;
    for(auto x: A)
    {
        if(x == '(')
            count++;
        else
        {
            if(count==0)
            {
                return 0;
            }
            count--;
        }
    }
    return count == 0;
}
