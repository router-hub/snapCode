string Solution::longestCommonPrefix(vector<string> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    string ans="";
    for(int i=0;i<A[0].size();i++)
    {
        if(A[0][i]==A[n-1][i])//As Array is sorted,compare if the characters in the first and the last string are same.
        {
            ans+=A[0][i];//Append the similar prefix characters in the ans
        }
        else
        {
            break;
        }
    }
    return ans;
    
}
