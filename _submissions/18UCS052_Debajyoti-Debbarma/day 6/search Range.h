vector<int> Solution::searchRange(const vector<int> &A, int B) {
    
    vector<int> ans;
    
    for(int i=0;i<A.size();i++){
        if(A[i]==B)
        {
            ans.push_back(i);
            break;
        }
    }
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]==B)
        {
            ans.push_back(i);
            break;
        }
    }
    if(ans.size()==1||ans.size()==0) {
        ans.clear();
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
    
}
