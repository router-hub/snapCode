void findCombinations( vector<vector<int>> &ac,int &A,int start,int &B,vector<int> &c){
   if(c.size()==B){
       ac.push_back(c);
   }
   if(c.size()<B){
       for(int i=start;i<=A;i++){
           c.push_back(i);
           findCombinations(ac,A,i+1,B,c);
           c.pop_back();
       }
   }
    
}

vector<vector<int> > Solution::combine(int A, int B) {
    
    vector<vector<int>> allCombinations;
    vector<int> combs;
    
    findCombinations(allCombinations,A,1,B,combs);
    
    return allCombinations;
}
