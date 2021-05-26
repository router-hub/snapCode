string lcp(string s1,string s2){
    int i=0;
    int j=0;
    string s="";
    if(s1.size()==0 || s2.size()==0)
        return s;
    while(i<s1.size() && j<s2.size())
    {
        if(s1[i]==s2[j]){
            s=s+s1[i];
            i++;
            j++;}
        
        else
            break;
    }
    
    return s;
}

string Solution::longestCommonPrefix(vector<string> &A) {
    
     string lp="";
        if(A.size()==0)
            return lp;
        if(A.size()==1)
            return A[0];
        lp=lcp(A[0],A[1]);
        for(int i=2;i<A.size();i++){
            lp=lcp(lp,A[i]);
        }
        
        return lp;
}
