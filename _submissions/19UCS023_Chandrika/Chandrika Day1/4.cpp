int Solution::isPalindrome(string A) {
    if(A.empty())
     return 1;
    int length_of_string=A.size();
    int l=0;
    int h=length_of_string-1;
    while(h>l)
    {
        while(!isalnum(A[l]) && l<h)
        l++;
        while(!isalnum(A[h]) && h>l)
        h--;
        if(tolower(A[l++])!=tolower(A[h--]))
        return 0;
        
    }
    return 1;   
}
