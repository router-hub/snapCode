//We have to return highest product that can be formed using 3 numbers from the array. If it would have been a only positive array then we simply multiply the 3 largest numbers 
//and return the answer but here negative numbers are also there. So we have to consider two negative numbers with greatest absolute value as - - will cancel out for two numbers
//ans multiply it with our largest positive number and compare with the product of 3 maximum numbers and return it. When we will sort the array , we will automatically get
//the 2 negative numbers with largest absolute value as A[0] ans A[1] , and the maximum numbers similarly.We dont need any other neg elements other than these elements,
//as we are only concerned with greatest absolute values
//It can also be done in 1 traversal by maintaining five variables and then following the above same process.
int Solution::maxp3(vector<int> &A) {
    // int n=A.size();
    // sort(A.begin(),A.end());
    // int prod_pos=A[n-1]*A[n-2]*A[n-3];
    // int prod_neg=A[n-1]*A[0]*A[1];
    // return max(prod_pos,prod_neg);
    //in one traversal
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=max1)
        {
            max3=max2;
            max2=max1;
            max1=A[i];
        }
        else if (A[i]>=max2)
        {
            max3=max2;
            max2=A[i];
        }
        else if(A[i]>=max3)
            max3=A[i];
        if(A[i]<0&&A[i]<=min1)
        {
            min2=min1;
            min1=A[i];
        }
        else if(A[i]<0&&A[i]<=min2)
            min2=A[i];
    }
    int prod_pos=max1*max2*max3;
    int prod_neg=INT_MIN;
    if(min1<0&&min2<0)
    prod_neg=max1*min1*min2;
    return max(prod_pos,prod_neg);
}
