int Solution::maxArea(vector<int> &A) {
   if(A.size()==0||A.size()==1)
{return 0;}
     int i = 0;
    int j = A.size()-1;
    int ans = 0;
    
    while(i < j){
        int curr = 0;
        if(A[i] <= A[j]){
            curr = (j-i)*A[i];
            i++;
        }
        else{
            curr = (j-i)*A[j];
            j--;
        }
        if(curr > ans){
            ans = curr;
        }
      //  if(i == j){
        //    break;
        //}
    }
    
    return ans;
}
