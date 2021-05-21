string commonPrefix(string &s1, string &s2){
    int n1 = s1.length(),n2 = s2.length();
    string s;
    
    for(int i=0,j=0;i<n1&&j<n2;i++,j++){
        if(s1[i]!=s2[j])
        break;
        s.push_back(s1[i]);
    }
    return s;
}


string Solution::longestCommonPrefix(vector<string> &s) {
    
    string prefix = s[0];
    int n = s.size();
    for(int i=1;i<n;i++){
        prefix = commonPrefix(prefix,s[i]);
    }
    return prefix;
}
