void Solution::merge(vector<int> &A, vector<int> &B) 
{
   /* int i=0,j=0;
    while(i<A.size()&&j<B.size())
    {if(A[i]<=B[j])
        i++;
        else if(A[i]>B[j])
          {swap(A[i],B[j]);
              i++;
          }
    }
    sort(B.begin(),B.end());
    for(int k=0;k<B.size();k++)
    A.push_back(B[k]);
    */
    int i=0,j=0;
int n1 = A.size(), n2=B.size();
vector<int>c;

while(i+j < n1+n2)
{
    if(i==n1) c.push_back(B[j++]);
    else if(j == n2) c.push_back(A[i++]);
    else if(A[i] <= B[j]) c.push_back(A[i++]);
    else c.push_back(B[j++]);
}
A = c;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
   
