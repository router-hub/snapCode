string Solution::simplifyPath(string A) {
    
      vector<string> check(1000);
   string result;
   int j=0;
        if(A[0]=='/'){
            j=-1;
        }

   for(int i=0;i<A.length();i++){

       if(A[i]!='/'){
            check[j]=check[j]+A[i];

       }else{
           j++;
       }
   }

    for(auto i=check.begin();i!=check.end();i++){

       if(*i=="."){

           check.erase(i);
           i--;
       }

   }

   for(auto i=check.begin();i!=check.end();i++){

       if(*i==".."){
            if(i-1<check.begin()){
                check.erase(i);
                i--;
            }else{
                check.erase(i-1);
           check.erase(i-1);
           i=i-2;
            }

       }

   }

   for(int i=0;i<check.size();i++){
       if(check[i]!=".." && check[i]!=""){
            result+='/';
           result+=check[i];
       }

   }
   if(result=="")
   return "/";

   return result;


}
