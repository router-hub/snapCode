vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
sort(A.begin(),A.end());
set<vector<int>> res;
int n=A.size();
int target=B;
for(int i=0;i<n-3;++i){
    for(int j=i+1;j<n-2;++j){
        int st=j+1;
        int end=n-1;
        while(st<end){
            int summ=A[i]+A[j]+A[st]+A[end];
            if(summ==target){
                res.insert({A[i],A[j],A[st],A[end]});
                st++;
                end--;
            }else if(summ<target){
                st++;
            }else{
                end--;
            }
        }
    }
}
vector<vector<int>> ans;
for(auto i:res){
    ans.push_back(i);
}
return ans;
}
