vector<int> Solution::searchRange(const vector<int> &A, int B) {
     vector<int>ans{-1,-1};
     if(A.size()==1 && B==1)
     {ans[0]=0;
         ans[1]=0;
         return ans;
     }
     
    int mid=0,low=0,high=A.size()-1;
    // int start=-1,end=-1;
    while(low<=high)
    { int mid=(low+high)/2;
    if(A[mid]==B)
    { while(A[mid]<A[high]) high--;
     while(A[mid]>A[low]) low++;
      ans[0]=low;
    ans[1]=high;
    return ans;
    }
    else if(A[mid]>B)
     high=mid-1;
     else
     low=mid+1;
    }
   
   
    return ans;
}
