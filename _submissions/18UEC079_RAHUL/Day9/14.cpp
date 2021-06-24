int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
//     int n=A.size(),sum1=0,sum2=0;
//     vector<int>left(n),right(n);
//     left[0]=A[0],right[0]=B[0];
//     if(n==1)
//     {
//         if(A[0]>=B[0])
//         return 0;
//         else
//         return -1;
//     }
//   // return A[0]>B[0];
//     for(int i=1;i<n;i++)
//     {
//         left[i]=A[i]+left[i-1];
//         right[i]=B[i]+right[i-1];
//     }
//     if(right[n-1]>left[n-1])
//     return -1;
//     int startindex;
//     for(int i=n-1;i>=0;i--)
//     {
//         if(right[i]>left[i])
//          { startindex=i+1;
//             break;}
//     }
//     int count=0;
//     while(count!=n)
//     {
//         int j=startindex;
//         j=j%n;
//         count++;
//         sum1+=A[j];
//         sum2+=B[j];
//         j++;
//         if(sum2>sum1)
//         return -1;
// }
// return startindex;


int n=A.size(),c;
    for(int i=0;i<n;i++)
    {   c=0;
        if(A[i]>=B[i])
        {
            for(int j=i;j<n;j++)
            {
                c+=A[j]-B[j];
                if(c<0)
                break;
            }
            if(c>=0)
            
        {    for(int j=0;j<i;j++)
            {
                c+=A[j]-B[j];
                if(c<0)
                break;
                
            }
        }    
            if(c>=0)
            return i;
        }
    }
    return -1;


}
