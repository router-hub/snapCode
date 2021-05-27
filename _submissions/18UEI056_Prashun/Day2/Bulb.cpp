/*
N light bulbs are connected by a wire.

Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb.

Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all the bulbs.

You can press the same switch multiple times.

Note : 0 represents the bulb is off and 1 represents the bulb is on.
*/
//code
int Solution::bulbs(vector<int> &A) {
    int n=A.size();
    if(n==0)return 0;
    int min_stp=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {if(A[i]==flag)
        min_stp++;
        if(flag==0) flag=1;
        else flag=0;
    }
    return min_stp;
}
