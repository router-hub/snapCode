/*
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.
*/
//code
string Lcp(string s,string x)
{ string lcp="";
int n=s.length();
int m=x.length();
for(int i=0;i<min(n,m);i++)
{if(s[i]==x[i])
    lcp.push_back(s[i]);
    else 
    return lcp;
}

return lcp;
    
}

string Solution::longestCommonPrefix(vector<string> &A) {
    string s=A[0];
    //s.push_back(A[0]);
    for(int i=1;i<A.size();i++)
    {
        s=Lcp(s,A[i]);
    }
    return s;
}
