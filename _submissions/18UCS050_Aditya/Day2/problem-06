int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n = A.size(), left, right, diff = INT_MAX;
    long sum, ans = (long)B;
    for(int i=0; i<n-2; i++){
        left = i+1; right = n-1;
        while(left < right){
            sum = A[i]+A[left]+A[right];
            if(abs(B-sum) < diff){
                diff = abs(B-sum);
                ans = sum;
            }
            if(sum < B) left++;
            else right--;
        }
    }
    return ans;
}
