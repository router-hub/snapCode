/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.*/
//code
int Solution::isPalindrome(string A) {
    int n=A.size();
    
    string s="";
    for(int i=0;i<n;i++)
    { char y=A[i];
        if(('A'<=y && y<='Z') || ('a'<=y && y<='z') || ('1'<=y && y<='9'))
        s.push_back(y);
    }
    int i=0,j=s.size()-1;
   
    while(i<j)
    { cout<<s[i]<<" ";
        if(s[i]!=s[j])
     return 0;
     i++;j--;
    }
    return 1;
}
