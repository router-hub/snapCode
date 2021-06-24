string Solution::solve(string A) {
    
   unordered_map<char, int> mp;
    queue<char> q;
    string ans;
    for (auto c : A)
    {
        mp[c]++;
        q.push(c);
        while (!q.empty() && mp[q.front()] > 1)   q.pop();
        if (!q.empty())                         ans.push_back(q.front());
        else                                    ans.push_back('#');
    }
    return ans;
   
   
   
   
   
    //TIME LIMIT EXCEEDED
    
    // string B;
    // vector<char>s;
    // vector<char>b;
    
    
    // for(int i=0;i<A.length();i++){
            
    //          auto it=find(s.begin(),s.end(),A[i]);
             
    //          if(it!=s.end()){
    //              auto k=find(b.begin(),b.end(),A[i]);
    //              if(k!=b.end()){
    //                  b.erase(k);
    //              }
    //          }else{
    //              s.push_back(A[i]);
    //              b.push_back(A[i]);
    //          }
             
    //          if(b.size()==0) B=B+"#";
    //          else
    //          B=B+b[0];
    // }
    // return B;
}
