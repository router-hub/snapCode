// https://www.interviewbit.com/problems/min-steps-in-infinite-grid
/*
You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points..
Give the minimum number of steps in which you can achieve it. You start from the first point.*/

//Code cpp
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    //base case
    if( A.size() != B.size() || A.size()<=1)
    return 0;
    if(*A.begin()==*A.end() && *B.begin()==*B.end())
    return 0;
    
    int min_step=0;
    for(int i=0;i<A.size()-1;i++)
    {
    min_step+=max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
    }
    return min_step;
}
//code C
/*
int coverPoints(int* X, int n1, int* Y, int n2) {
    int stepsx = 0, stepsy = 0, diffx = 0, diffy = 0, steps = 0;
    int i = 0;
    
    for(i = 0; i< (n1-1) ; i++)
    {
        diffx = X[i+1] - X[i];
        if(diffx < 0)
            diffx = diffx*(-1);
        //stepsx = stepsx + diffx;
        
        diffy = Y[i+1] - Y[i];
        if(diffy < 0)
            diffy = diffy*(-1);
        //stepsy = stepsy + diffy;
        
        if(diffx > diffy)
            steps = steps+diffx;
        else
            steps =  steps+diffy;
    }
    
    return steps;
}
*/
/*Explanation
Note that because the order of covering the points is already defined,
the problem just reduces to figuring out the way to calculate the distance between 2 points (A, B) and (C, D).

Note that what only matters is X = abs(A-C) and Y = abs(B-D).

While X and Y are positive, you will move along the diagonal and X and Y would both reduce by 1.
When one of them becomes 0, you would move so that in each step the remaining number reduces by 1.

In other words, the total number of steps would correspond to max(X, Y).*/
