/*
Problem link:
https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
*/

/*Solution*/
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int min_no_of_steps=0;
    for(int i=0;i<n-1;i++)
    {
        int x=abs(A[i]-A[i+1]);
        int y=abs(B[i]-B[i+1]);
        min_no_of_steps+=max(x,y);
    }
    return min_no_of_steps;
}
