int Solution::isPalindrome(string A) {
    int i = 0, j = A.length()-1;
    while(i<j)
    {
        while(i<j && isalnum(A[i])==0)
            i++;
        
        while(i<j && isalnum(A[j])==0)
            j--;
        
        if(tolower(A[i])!=tolower(A[j]))
            
              return 0;
            i++;
            j--;
    }   
    return 1;
        
}
