/*
DAY-2:
PROBLEM 4:LONGEST COMMON PREFIX
LINK:https://www.interviewbit.com/problems/longest-common-prefix/
*/
string lCommPre(string st1,string st2)
{
    int i=0,j=0;
    string st="";
    if(st1.size()==0||st2.size()==0)
    {
        return st;
    }
    while(i<st1.size()&&j<st2.size())
    {
        if(st1[i]==st2[j])
        {
            st+=st1[i];
            i++,j++;
        }
        else
        {
            break;
        }
    }
    return st;
}
string Solution::longestCommonPrefix(vector<string> &A) 
{
    string commPre="";
    if(A.size()==0)
    {
        return commPre;
    }
    if(A.size()==1)
    {
        return A[0];
    }
    commPre=lCommPre(A[0],A[1]);
    for(int i=2;i<A.size();i++)
    {
        commPre=lCommPre(commPre,A[i]);
    }
    return commPre;
}
