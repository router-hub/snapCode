void findCombinations( vector<vector<int>> &ac,vector<int> &A,int start,int target,vector<int> &c){
       if(target==0){
           ac.push_back(c);
       }
       if(target<A[start]) return;
           
           for(int i=start;i<A.size();i++){
               c.push_back(A[i]);
               findCombinations(ac,A,i+1,target-A[i],c);
               c.pop_back();
           }
       
 
    
}




vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    
    vector<vector<int>> allCombinations;
    vector<int> combs;
    sort(A.begin(),A.end());
    
    findCombinations(allCombinations,A,0,B,combs);
    
    allCombinations.erase(unique(allCombinations.begin(),allCombinations.end()),allCombinations.end());
    
    
    
    return allCombinations;
    
}
