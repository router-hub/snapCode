int Solution::searchInsert(vector<int> &A, int B) {
    int mid=0, low=0,high=A.size()-1;
    while(low<=high)
    {mid=(low+high)/2;
        if(A[mid]==B)
         return mid;
         else if(A[mid]>B)
          high=mid-1;
          else
          low=mid+1;
    }
    return max(low,high);
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
