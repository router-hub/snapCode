int reverse(int N)
{int new_digit=0;
while(N)
    { new_digit=new_digit*10+(N%10);
        N=N/10;
    }
    return new_digit;
}

int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    if(A<10) return 1;
    if(A==reverse(A)) return 1;
    else return 0;
}
