bool checkIfVisited(vector<string> &visited,int i,int j){
    string tofind=to_string(i)+to_string(j);
    auto it=find(visited.begin(),visited.end(),tofind);
    if(it!=visited.end()) return true;
    return false;
}

void traverse(vector<vector<int>> &A,int i,int j,int &counter,vector<string> &visited,vector<int> &count){
    
    bool v=checkIfVisited(visited,i,j);
    
    if(i>=0&&j>=0&&i<A.size()&&j<A[i].size()&&A[i][j]==1&& !v){
        counter++;
        string b=to_string(i)+to_string(j);
        visited.push_back(b);
        count.push_back(counter);
        traverse(A,i,j-1,counter,visited,count);
        traverse(A,i-1,j-1,counter,visited,count);
        traverse(A,i-1,j,counter,visited,count);
        traverse(A,i-1,j+1,counter,visited,count);
        traverse(A,i,j+1,counter,visited,count);
        traverse(A,i+1,j+1,counter,visited,count);
        traverse(A,i+1,j,counter,visited,count);
        traverse(A,i+1,j-1,counter,visited,count);
        
    }
}



int Solution::solve(vector<vector<int> > &A) {
    vector<string> visited;
    vector<int> count;
    int counter=0;
    
     for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            counter=0;
            traverse(A,i,j,counter,visited,count);
        }
    }
    
    int ans=-1;
    
    for(int i=0;i<count.size();i++){
        ans=max(ans,count[i]);
    }
    return ans;
    
    
}
