int Solution::isPalindrome(string s) {
    int n= s.length();
    for(int i=0,j=n-1;i<j;){
        
        //my soln
        
        // if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)){
        //     if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)||(s[j]>=48&&s[j]<=57)){
        //         if((s[i]!=s[j])&&(s[i]+32!=s[j])&&(s[i]!=s[j]+32))
        //         return 0;
        //         i++;j--;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // else{
        //     if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)||(s[j]>=48&&s[j]<=57)){
        //         i++;
        //     }
        //     else{
        //         i++;j--;
        //     }
        // }
        
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j--;
        while(toupper(s[i]) != toupper(s[j])) return 0;
        
        i++; j--;
        
    }
    return 1;
    
}
