
//TIME LIMIT EXCEEDED FOR COMMENTED SOLUTION
// void findAllSubsets(string &A,string &B,string &C,int start,int end,int rLength,int &count){
    
//     if(C.length()==rLength &&C[0]==B[0] &&C[rLength-1]==B[rLength-1]){
//         if(C==B)
//         count++;
//     }
    
//     if(C.length()<rLength){
//         for(int i=start;i<=A.length();i++){
//             C.push_back(A[i]);
//             if(C[0]==B[0])
//             findAllSubsets(A,B,C,i+1,end,rLength,count);
//             C.pop_back();
//         }
//     }
// }




// int Solution::numDistinct(string A, string B) {
    
//   int count=0;
//   vector<string> allStrings;
//   string C="";
//   int start=0,end=B.length()-1;
   
//   for(int i=0;i<A.length();i++){
//       if(A[i]==B[0]){
//           start=i;
//           break;
//       }
//   }
//   for(int i=A.length()-1;i>=0;i--){
//       if(A[i]==B[B.length()-1]){
//           end=i;
//           break;
//       }
//   }
   
//   findAllSubsets(A,B,C,start,end,B.length(),count);

//     return count;
    
// }


int Solution::numDistinct(string S, string T) {
    
  int m = T.length();
            int n = S.length();
            if (m > n) return 0;    // impossible for subsequence
            vector<vector<int>> path(m + 1, vector<int>(n + 1, 0));
            for (int k = 0; k <= n; k++) path[0][k] = 1;    // initialization

            for (int j = 1; j <= n; j++) {
                for (int i = 1; i <= m; i++) {
                    path[i][j] = path[i][j - 1] + (T[i - 1] == S[j - 1] ? path[i - 1][j - 1] : 0);
                }
            }

            return path[m][n];
    
}
