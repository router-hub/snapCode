/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0?
Find all unique triplets in the array which gives the sum of zero.
*/

//code
vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>>ans;
    int n=A.size();
    if(n<3) return ans;
    set<vector<int>>s;
   sort(A.begin(),A.end());
     int lo,hi;
     for(int i=0;i<n-2;i++)
     { lo=i+1,hi=n-1;
     while(lo<hi)
     {long sum= (long) A[i]+ (long)A[lo]+(long)A[hi];
     if(sum==0)
     {vector<int>triplet={A[i],A[lo],A[hi]};
   s.insert(triplet);
 hi--;
     }
      else if(sum>0)hi--;
      else lo++;
     }
     }
     for(auto x:s) ans.push_back(x);
     return ans;
}
