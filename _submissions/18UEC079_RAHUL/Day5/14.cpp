int Solution::seats(string A) {
    
      vector<int>pos;
    for(int i=0;i<A.size();i++){
        if(A[i]=='x')
         pos.push_back(i);
    }
    int n=pos.size();
    long long int ans=0;
    int mid=n/2;int k=1;
    for(int i=mid-1;i>=0;i--){
        ans=(ans+pos[mid]-k-pos[i])%10000003;
        k++;
    }
    k=1;
    for(int i=mid+1;i<n;i++){
        ans=(ans+pos[i]-(pos[mid]+k))%10000003;
        k++;
    }
    return ans%10000003;
}
