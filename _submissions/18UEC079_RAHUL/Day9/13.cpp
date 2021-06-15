//   bool is_Interleave(string s1, int i, string s2, int j, string s3, int k, vector<vector<int>>&memo) {
//         if (i == s1.length()) {
//             return s2.substr(j)==(s3.substr(k));
//         }
//         if (j == s2.length()) {
//           return s1.substr(j)==(s3.substr(k));
//         }
//         if (memo[i][j] >= 0) {
//             return memo[i][j] == 1 ? true : false;
//         }
//         bool ans = false;
//         if (s3[k] == s1[i] && is_Interleave(s1, i + 1, s2, j, s3, k + 1, memo)
//                 || s3[k] == s1[j] && is_Interleave(s1, i, s2, j + 1, s3, k + 1, memo)) {
//             ans = true;
//         }
//         memo[i][j] = ans ? 1 : 0;
//         return ans;
//     }

int Solution::isInterleave(string A, string B, string C) {
    
    //       int n1=s1.length(),n2=s2.length(),n3=s3.length();
    //     if(n3!=n1+n2)
    //         return false;
    //     if(n1==0 && n2==0 && n3==0)
    //          return true;
    //     if(n1==0)
    //         return s2==s3;
    //     if(n2==0)
    //         return s1==s3;
    //   //  int i=0,j=0,k=0;
    //   vector<vector<int>>memo(n1,vector<int>(n2,-1));
    //     return is_Interleave(s1, 0, s2, 0, s3, 0, memo);
        
        
        
         int a = A.size(), b = B.size(), c = C.size();
    
    if((a + b) != c){
        return 0;
    }
    
    vector<vector<int> > temp(a+1, vector<int>(b+1, 0));
    
    temp[0][0] = 1;
    
    for(int i = 1; i < temp.size(); i++){
        if(C[i-1] == A[i-1]){
            temp[i][0] = temp[i-1][0];
        }
    }
    
    for(int i = 1; i < temp[0].size(); i++){
        if(C[i-1] == B[i-1]){
            temp[0][i] = temp[0][i-1];
        }
    }
    
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if((C[i+j-1] == A[i-1]) && (C[i+j-1] == B[j-1])){
                temp[i][j] = max(temp[i-1][j], temp[i][j-1]);
            }
            else if(C[i+j-1] == A[i-1]){
                temp[i][j] = temp[i-1][j];
            }
            else if(C[i+j-1] == B[j-1]){
                temp[i][j] = temp[i][j-1];
            }
        }
    }
    
    // for(int i = 0; i <= a; i++){
    //     for(int j = 0; j <= b; j++){
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
        
    
    return temp[a][b];
        
}
