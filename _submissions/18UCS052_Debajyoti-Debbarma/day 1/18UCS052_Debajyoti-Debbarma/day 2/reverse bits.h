unsigned int reverseAndConvert(unsigned int num){
    
    vector<int>bin;
    
    while(num!=0){
        bin.push_back(num%2);
        num=num/2;
    }
    
    int sum=0;
    int limit=31-bin.size();
    for(int i=31,j=0;i>limit;i--,j++){
        sum=sum+(pow(2,i)*bin[j]);
        
    }
    return sum;
}


unsigned int Solution::reverse(unsigned int A) {
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==0) return 0;
    
    
    
    return reverseAndConvert(A);
    
}
