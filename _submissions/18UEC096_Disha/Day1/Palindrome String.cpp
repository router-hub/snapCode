//It is a fairly simple question of checking whether a string is palindrome or not, just the trickier part is that you have to ignore all the characters & space other than
//alphanumeric characters. 
//The common mistake that can occur is that you have to ignore the alphanumeric characters untill it occurs not just once by checking with an if condition i.e.
// string ba**^$#$#b is also a palindrome . There can be as many non-alphanumeric character b/w aba and it still be a palindrome like a$$$$$$$ba, a^ba,aba### etc.
// 🤔So, you have to use while in the below condition because you don't know how many consecutive non-alphanumeric characters will occur. 
//while(i<=j&&!isalnum(B[j]))
int Solution::isPalindrome(string A) {
    if(A.empty()) return 1;
    /*  
    1p*a*p1
    i=0 j=6
    i=1 j=5
    i=2 j=4
    i=3 j=3
    */
    string B=A;
    int i=0,j=B.length()-1;
    while(i<=j)
    {
        while(i<=j&&!isalnum(B[i]))//both digits & alphabets are considered. Remember to check i<=j before to avoid access error
           i++;
       while(i<=j&&!isalnum(B[j]))
           j--;   
        if(i<=j&&tolower(B[i])!=tolower(B[j]))//there may be both upper & lowercase character so before checking convert
        {
         
        return 0;
        }
        i++;
        j--;
    }
    return 1;
    
    
}
