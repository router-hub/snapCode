int Solution::candy(vector<int> &A) {
    vector<int>candy_count(A.size(),1);//each element represent no of candies for each child
    bool flag=true;
    int ans=0;
    while(flag)
    {
        flag=false;
    for(int i=0;i<A.size();i++)
    {
        if(i!=A.size()-1 && A[i]>A[i+1] && candy_count[i]<=candy_count[i+1])
    {
        candy_count[i]=candy_count[i+1]+1;
        flag=true;
    }
   if(i>0 && A[i]>A[i-1] && candy_count[i]<=candy_count[i-1])
    {
       candy_count[i]=candy_count[i-1]+1;
       flag=true;
    }

}
}
for(int i=0;i<A.size();i++)
{
    ans+=candy_count[i];
}
return ans;
    
    
}
