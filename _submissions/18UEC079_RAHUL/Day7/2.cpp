string Solution::convertToTitle(int A) {
    string str;
        while(A--){
            str+=char('A' + A%26);
          // cout<<str<<"d"<<endl;
            A/=26;
        }
        reverse(str.begin(),str.end());
        return str;
    //     long long int n=A;
    //     string ans;
    //     while (n) {
    //     ans = char ((n - 1) % 26 + 'A') + ans;
    //     cout<<ans<<"d"<<endl;
    //     n = (n - 1) / 26;
    // }
    // return ans ;
        
}
 
   
