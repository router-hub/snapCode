vector<int> Solution::lszero(vector<int> &A) {
   map<int,int>mp;
vector<int>temp;

int sum = 0;
int ans = 0;
int start=-1;
mp[0] = -1;
for(int i = 0;i<A.size();i++){
    sum+=A[i];
    if(mp.find(sum)==mp.end()){
     mp[sum]=i;
    }
    else{
        if(ans<i-mp[sum])
        {ans=i-mp[sum];
            start=mp[sum]+1;
        }
    }
    
}
if(ans==0) return temp;
else
   { for(int i=start;i<ans+start;i++)
       temp.push_back(A[i]);
   }

return temp;
}
