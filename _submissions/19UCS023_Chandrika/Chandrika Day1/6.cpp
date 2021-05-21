int Solution::solve(vector<int> &A, int B) {
 sort(A.begin(),A.end());
 unordered_set<int> st;
for(auto it:A)
{
    if(st.find(it+B)!=st.end() || st.find(it-B)!=st.end())
    return 1;
    else
    st.insert(it);
}
return 0;
   
}
 /*OR*/
 int Solution::solve(vector<int> &A, int B) {
 sort(A.begin(),A.end());
 unordered_map<int, int>mp;
for(auto it:A)
{
    
    if(mp[it+B] || mp[it-B])
    return 1;
    else
    mp[it]++;
}
return 0;
   
}
