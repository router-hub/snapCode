string Solution::solve(string a) {
    
    // int n=A.length();
    // string s="";
    // queue<char>q;
    
    // for(int i=0;i<n;i++)
    // {
    //     if(i==0)
    //     {
    //         s+=A[0];
    //         q.push(A[0]);
    //     }
    //     else
    //     {
    //         if(!q.empty()&& q.front()!=A[i])
    //         {
    //             char temp=q.front();
    //              s+=temp;
    //              q.push(A[i]);
    //         }
    //         else if(!q.empty()&& q.front()==A[i])
    //         {
    //             q.pop();
    //             if(!q.empty())
    //          { char temp=q.front();
    //          s+=temp;}
    //              else
    //               s+='#';
    //         }
    //     }
    //     //cout<<s<<"k"<<endl;
    // }
    // return s;
    
    queue<char>q;
unordered_map<char,int>m;
string ans = "";

for(int i =0; i < a.size(); i++){
    m[a[i]]++;
    if(m[a[i]] == 1){
        q.push(a[i]);
        ans += q.front(); //here character comes only once so just append in answer string as well as push in queue
    }
    else{
        while(!q.empty() && m[q.front()] > 1) // removing every character who is repeated
            q.pop();
        if(!q.empty())
            ans += q.front();  // queue is not empty it means there are some character who is not repeated
        else
            ans += '#';     // if queue is empty it means every character which you have seen till now is repeated
    }
    
    
}
return ans;
    
}
