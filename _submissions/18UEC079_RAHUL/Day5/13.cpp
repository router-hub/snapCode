int Solution::numDistinct(string A, string B) {
    
     int rows = B.size(), cols = A.size();

    if(rows > cols){
        return 0;
    }
    
    vector<vector<int> > temp(rows+1, vector<int>(cols+1, 0));
    
    for(int i = 0; i <= cols; i++){
        temp[0][i] = 1;
    }
    
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= cols; j++){
            if(A[j-1] == B[i-1]){
                temp[i][j] = temp[i-1][j-1] + temp[i][j-1];
            }
            else{
                temp[i][j] = temp[i][j-1];
            }
            
        }
    }
    
    // for(int i = 0; i <= rows; i++){
    //     for(int j = 0; j <= cols; j++){
    //         cout<<temp[i][j] <<" ";
            
    //       }
    //       cout<<endl;
    //     }
        
    
    return temp[rows][cols];
    
}
