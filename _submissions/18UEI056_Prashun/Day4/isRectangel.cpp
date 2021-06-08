int Solution::solve(int A, int B, int C, int D) {
   vector<int>v;
   v.push_back(A);
   v.push_back(B);
   v.push_back(C);
   v.push_back(D);
   sort(v.begin(),v.end());
   if((v[0]==v[1] && (v[2]==v[3])&&(v[2]>v[1])))
   return 1;
   else
   return 0;
}
