void findCombinations( vector<vector<int>> &ac,vector<int> &A,int start,int target,vector<int> &c){
    
    
    //TIME LIMIT EXCEEDED FOR COMMENTED PART
    
//   if(c.size()==4){
//       int sum=0;
//       sum=c[0]+c[1]+c[2]+c[3];
//       if(sum==target){
//           ac.push_back(c);
//       }
//   }
//   if(c.size()<4){
//       for(int i=start;i<A.size();i++){
//           c.push_back(A[i]);
  
//                 findCombinations(ac,A,i+1,target,c);
           
//           c.pop_back();
//       }
//   }
   
    
// }

// vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
//     vector<vector<int>> allCombinations;
//     vector<int> combs;
//     if(A.size()==0) return allCombinations;
    
//     findCombinations(allCombinations,A,0,B,combs);
//     for(int i=0;i<allCombinations.size();i++){
//         sort(allCombinations[i].begin(),allCombinations[i].end());
//     }
//     sort(allCombinations.begin(),allCombinations.end());
//     allCombinations.erase(unique(allCombinations.begin(),allCombinations.end()),allCombinations.end());
    
//     return allCombinations;




 set<vector<int>> s;
    sort(A.begin(), A.end());
    int n = A.size();
    for(int i = 0; i < n-3; i++){
        for(int j = i+1; j < n-2; j++){
            int target = B - A[i] - A[j], l = j+1, h = n-1, sum = 0;
            while(l < h){
                sum = A[l]+A[h];
                if(sum == target){
                    vector<int> v = {A[i], A[j], A[l++], A[h--]};
                    s.insert(v);
                }
                else if(sum < target) l++;
                else h--;
            }
        }
    }
    return vector<vector<int>>(s.begin(), s.end());
}
