/*
DAY-1:
PROBLEM 4:PALINDROME STRING
LINK:https://www.interviewbit.com/problems/palindrome-string/
*/
int Solution::isPalindrome(string A) 
{
    int lenOfString=A.size();
    int low=0;
    int high=lenOfString-1;
    if(A.empty())
    {
        return 1;
    }
    while(high>low)
    {
        while(!isalnum(A[low])&&low<high)
        {
            low++;
        }
        while(!isalnum(A[high])&&high>low)
        {
            high--;
        }
        if(tolower(A[low++])!=tolower(A[high--]))
        {
            return 0;
        }
    }
    return 1;
}
