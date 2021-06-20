

// void findCombinations( vector<vector<int>> &ac,vector<int> &A,int start,int &B,vector<int> &c){
//   if(c.size()==2 && (c[0]^c[1])==B){
//       ac.push_back(c);
//   }
//   if(c.size()<2){
//       for(int i=start;i<A.size();i++){
//           c.push_back(A[i]);
//           findCombinations(ac,A,i+1,B,c);
//           c.pop_back();
//       }
//   }
    
// }


int Solution::solve(vector<int> &A, int B) {
    
    // vector<vector<int>> allCombinations;
    // vector<int> combs;
    
    // findCombinations(allCombinations,A,0,B,combs);
    
    // allCombinations.erase(unique(allCombinations.begin(),allCombinations.end()),allCombinations.end());
    
    // int ans=allCombinations.size();
    
    // return ans;
    
    unordered_set<int> st;
    int a = A.size();
    int cnt=0;
    for(int i=0; i<a;i++)
    {
        int xr = A[i] ^ B;
        if(st.find(A[i]) == st.end())
            st.insert(xr);
        else
            cnt++;
    }
    return cnt;
}


