int Solution::seats(string A) {
    vector<int>temp;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='x')
        temp.push_back(i);//vector with indexes occupied
    } 
    int mid=temp.size()/2;
      int ans=0;  
        for(int i=0;i<temp.size();i++)
        {
            int st=temp[i];
            int ed=temp[mid]-(mid-i);
            ans=(ans+(abs(ed-st)))%10000003;//no of jumps made    
        }   
    return ans;
}
