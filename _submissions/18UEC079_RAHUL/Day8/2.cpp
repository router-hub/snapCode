int Solution::isPalindrome(int A) {
    if(A<0)
    return false;
    if(A==0)
    return true;
    string s1=to_string(A),s2="";
    
    while(A>0)
    {
        int rem=A%10;
        A=A/10;
        s2+=to_string(rem);
    }
    //cout<<s1<<" "<<s2<<endl;
    return s1==s2;
}
