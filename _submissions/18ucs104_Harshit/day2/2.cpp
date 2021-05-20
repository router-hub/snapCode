int Solution::sqrt(int A) {

        int low=1;
        long long int high=A;
        long long int mid;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if((mid*mid)==A)
                return mid;
            else if((mid*mid)<A)
                low=mid+1;
            else
                high=mid-1;
        }
        
        return high;
}
