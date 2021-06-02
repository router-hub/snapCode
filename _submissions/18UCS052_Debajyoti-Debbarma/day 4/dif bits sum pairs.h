
 int checkDif(string first,string second,int count){
     count=0;
     for(int i=0;i<first.length();i++){
         if(first[i]!=second[i]){
             count++;
         }
     }
   
     return count;
 }

string convertedToBits(int num,string bits){
      bits="";
        while(num!=0){
            int a=num%2;
            num=num/2;
            bits+=to_string(a);
        }
        
        int dif=31-bits.length();
        for(int j=0;j<dif;j++){
            bits+="0";
        }
        reverse(bits.begin(),bits.end());
    
    return bits;
}


int Solution::cntBits(vector<int> &A) {
    
      int sum=0;
      int count;
      string bits="";
    vector<vector<int>>pairs;
    
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            pairs.push_back({A[i],A[j]});
        }
    }
    
    int s;
    
    for(int i=0;i<pairs.size();i++){
        string a=convertedToBits(pairs[i][0],bits);
        string b=convertedToBits(pairs[i][1],bits);
        s=checkDif(a,b,count);
        sum+=s;
    }
    
    int k=pow(10,9)+7;
    return (sum*2)%k;

}
