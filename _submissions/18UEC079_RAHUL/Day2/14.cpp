int Solution::bulbs(vector<int> &A) {

    // int n=A.size();
    // if((n==1 && A[0]==1) || n==sum(A))
    // return 0;
    // else if(n==1 && A[0]==0)
    // return 1;
    // int c=0;
    // for(int i=0;i<n;i++)
    // {  if(A[i]==0)
    //   { for(int j=i;j<n;j++)
    //     {
    //         if(A[j]==1)
    //         A[j]=0;
    //         else 
    //         A[j]=1;
    //     }
    //      c++;
    //   // if(sum(A)==n)
    //   }
       
    // }
    //  return c;
    //  TIME LIMIT EXCEEDEDE'''''''''''''''''''''''''''''''''''''''''''''''''''
     int count = 0;
    int orig = 1;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 0){
            if(orig == 1){
                count++;
                orig = 0;
            }
        }
        else{
            if(orig == 0){
                count++;
                orig = 1;
            }
        }
    }
    
    return count;
}
