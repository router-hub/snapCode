unsigned int Solution::reverse(unsigned int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    int a[32];
    for(int i=0;i<32;i++){
        a[i] = (1&n);
        n = n/2;
    }
    
    n =0;
    
    for(int i=31;i>=0;i--){
        n += (pow(2,31-i));
    }
    return n;
}
