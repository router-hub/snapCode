int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
   int m=A.size(),n=A[0].size();
   int i=0,j=n-1;
   
   while(i>=0 && i<m && j>=0 && j<n){
       if(A[i][j]==B)
       return 1;
       else if(B>A[i][j])
        i++;
        else
        j--;
   }
   return 0;
}
