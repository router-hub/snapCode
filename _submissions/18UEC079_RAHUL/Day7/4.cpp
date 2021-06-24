int Solution::strStr(const string A, const string B) {
    
     // if(A.length()==B.length())
   //return 0;
    int i;
    for(i=0;i<A.length();i++)
    {    
        
        if(A.substr(i,B.length())==B)
        return i;
    }
    return -1;
}
