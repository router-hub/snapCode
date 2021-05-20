int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int p=0;
    for(int i=0;i<A.size()-1;i++)
    {
       if(A[i+1]==A[i]&&B[i+1]==B[i]) 
       continue;
       int x= abs(A[i+1]-A[i]);
       int y=abs(B[i+1]-B[i]);
       if(x>y)
       p+=x;
       else
       p+=y;
    }
    return p;
}
