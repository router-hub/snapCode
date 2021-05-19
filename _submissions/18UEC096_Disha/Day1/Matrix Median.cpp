//The median of the matrix can be found easily by storing all the elements of the matrix in 1-D array & then sort it & return (len+1)/2th element but if we have to do it in 
//O(1) space complexity then it becomes trickier. In this solution, we make use of the fact that it is a ROW-WISE SORTED matrix.We do binary search on the possible values of 
//median starting from upper bound=max element in matrix & lower bound=min element in matrix. For deciding whether to move to right half or left half of binary search, by
//upper bound, we calculate the no. of elements smaller than the current mid in every row(as the median of the matrix would be the (row*col+1)/2th element in matrix, so we 
//have to have (row*col+1/2)-1 elements smaller than our current mid in order for it to be eligible for median).
//So, two conditions arises, if no. of smaller elements<mid then we do start=mid+1 and increase the value of mid & else we decrease the value of mid once we found an eligible
//value of median as high=mid-1
//time complexity is O(row) for traversing every row and then for finding upper bound O(log (col)) and we do the binary search for 30 bits so total time complexity would be
//O(30*row*log(col))
int Solution::findMedian(vector<vector<int> > &A) {
    int row=A.size();
    int col=A[0].size();
    int max_val=0,min_val=1000000001;
    for(int i=0;i<row;i++)
    {
        max_val=max(max_val,A[i][col-1]);
        min_val=min(min_val,A[i][0]);
    }
    int median_pos=(row*col+1)/2,median;
    while(min_val<=max_val)
    {
        int mid=min_val+(max_val-min_val)/2;
        int curr_no_of_smaller_elements=0;
        for(int i=0;i<row;i++)
        {
            curr_no_of_smaller_elements+=upper_bound( A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        if(curr_no_of_smaller_elements<median_pos)
            min_val=mid+1;
        else
        {
            median=mid;
            max_val=mid-1;
        }
    }
    return min_val;
    
    
}
