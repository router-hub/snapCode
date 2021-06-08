/*int calculate_val(vector<int>&A,int x,int i)
{ int sum=0;
    for(int j=i;j<A.size();j++)
{
    sum+=(A[j]-x);
}
    return sum;
}*/
int Solution::solve(vector<int> &A, int B) {
  /*  int low=0,high=A.size()-1,mid;
    while(low<=high)
    { mid=(low+high)/2;
    int val=calculate_val(A,A[mid],mid);
    if(val==B) return A[mid];
    else if(val>B) low=mid+1;
    else high=mid-1;
    }
    int val1=0;
    while(B!=val1)
    { val1=calculate_val(A,A[mid],mid);
    if(val1==B) break;
    else if(val1<B) A[mid]=A[mid]-1;
    else
    A[mid]=A[mid]+1;
        
    }
*/
int n=A.size();
    sort(A.rbegin(), A.rend());
    int cur=1, res=0;
    for(int i=0;i<n;i++)
    {
        int x=(A[i]-ceil((float)(B-res)/(float)cur));
        if(i==n-1){
            if(x<0) return -1;
            return x;
        }
        else if(x<A[i+1]){
            res+=(cur*(A[i]-A[i+1]));
            cur++;
        }
        else{
            return x;
        }
    }
    return -1;

}
