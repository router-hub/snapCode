int Solution::searchInsert(vector<int> &arr, int b) {
     long start = 0;
     long end = arr.size()-1;
     long ans=0;
     bool flag = true;
     if(arr.size()==0)
     {
         return 0;
     }
     if(b>arr[arr.size()-1])
     {
         return arr.size();
     }
     if(b<arr[0])
     return 0;

     while(start<=end)
     {
          long mid = start + (end-start)/2;
          if(arr[mid]==b)
          {
               ans = mid;
               flag = false;
               break;
          }
          if(arr[mid]<b)
          {
               
               start = mid+1;
               ans = mid;
          }
          else
          {
              end = mid-1;
               
          }
          
     }
     if(flag)
     return ++ans;
     return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
