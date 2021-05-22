int Solution::sqrt(int x) {
    
    if(x==0)return 0;
    if(x==1) return 1;
    
    
      if (x == 0) return 0;
            int start = 1, end = x, ans;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (mid <= x / mid) {
                    start = mid + 1;
                    ans = mid;
                } else {
                    end = mid - 1;
                }
            }
            return ans;
    
    // int limit=A,previousNum=1;
    
    // if(A>=100){
    //     limit=A/5;
    // }
    
    // for(int i=1;i<=limit;i++){
        
    //     if(i*i==A){
    //         return i;
    //     }
        
    //     if(i*i>A){
            
    //         return previousNum;
    //     }
    //     previousNum=i;
        
    // }
    
    
    
}
