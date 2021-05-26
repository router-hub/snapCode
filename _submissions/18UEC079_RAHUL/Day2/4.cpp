string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    string sub=A[0];
    for(int i=1;i<n;i++)
    {
        string curr="";
        int k=0,j=0;
       while(k<sub.length() && j<A[i].length())
       {
           if(sub[k]==A[i][j])
           curr+=sub[k];
           else
           break;
           
           k++;
           j++;
       }
       sub=curr;
       if(curr=="")
       return curr;
    }
    return sub;
    
}
