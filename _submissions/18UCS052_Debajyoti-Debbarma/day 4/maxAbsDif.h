int Solution::maxArr(vector<int> &A) {
    
    //Exceeded time limit
    // int ans=0;
    
    // for(int i=0;i<A.size()-1;i++){
    //     for(int j=i+1;j<A.size();j++){
    //         ans=max(ans,(abs(A[i]-A[j])+abs(i-j)));
    //     }
    // }
    // return ans;
    
    
    //in required timelimit
    int ans = 0, n = A.size(); 
    
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    
    for(int i = 0; i < n; i++){
        max1 = max(max1, A[i] + i);
        max2 = max(max2, A[i] - i);
        min1 = min(min1, A[i] + i);
        min2 = min(min2, A[i] - i);
    }   
    ans = max(ans, max2 - min2);
    ans = max(ans, max1 - min1);
    return ans;
}
