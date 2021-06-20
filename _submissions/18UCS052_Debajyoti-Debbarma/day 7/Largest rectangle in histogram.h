int Solution::largestRectangleArea(vector<int> &A) {
    
    // if(A.size()==0) return 0;
    
    // int ans=A[0];
    
    // for(int i=1;i<A.size();i++){
    //     ans=max(ans,A[i]);
    // }
    
    // for(int i=0;i<A.size();i++){
        
    //     int height=A[i];
    //     int width=1;
        
    //     for(int j=i+1;j<A.size();j++){
    //         if(A[j]>=height){
    //             width++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
        
    //     for(int j=i-1;j>=0;j--){
    //         if(A[j]>=height){
    //             width++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
        
    //     int area=height*width;
        
    //     ans=max(ans,area);
        
        
    // }
    
    // return ans;
    
    int n=A.size();
    vector<int>left(n),right(n,n-1);
    stack<int>a,b;
    for(int i=0;i<n;i++){
        while(!a.empty() && A[a.top()]>=A[i])a.pop();
        if(!a.empty())left[i]=a.top()+1;
        a.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!b.empty() && A[b.top()]>=A[i])b.pop();
        if(!b.empty())right[i]=b.top()-1;
        b.push(i);
    }
    int ans=0;
    for(int i=0;i<n;i++)ans=max(ans,A[i]*(right[i]-left[i]+1));
    return ans;
}
