int B_search(vector<vector<int>>&A,int B,int k)
{ int low=0,high=A[k].size()-1;
    while(low<=high)
    { int mid=(low+high)/2;
        if(A[k][mid]==B) return 1;
        else if(A[k][mid]>B) high=mid-1;
        else low=mid+1;
    }
    return 0;
}


int Solution::searchMatrix(vector<vector<int> > &A, int B) {
int n=A.size();
int m=A[0].size();
for(int i=0;i<n;i++)
{if(A[i][m-1]==B) return 1;
  if(A[i][m-1]>B) { return B_search(A,B,i);
    break;}
    
}
    return 0;
}
