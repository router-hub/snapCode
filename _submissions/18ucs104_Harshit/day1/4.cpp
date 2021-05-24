#include<bits/stdc++.h>
using namespace std;

// to check palindrome
bool check_palindrome(string A){
    
    string copy_A=A;
    
    reverse(A.begin(),A.end());
    
    if(copy_A==A)
    return true;
    
    else
    return false;
}

// string modification
string modify(string A){

     string newA="";
    
    for(int i=0;i<A.size();i++){
        if(A[i]>='0' && A[i]<='9')
        newA+=A[i];
        
        else if((A[i]>='A' && A[i]<='Z') ||( A[i]>='a' && A[i]<='z')){
            newA+=tolower(A[i]);
            
        }
    }

    return newA;

}

int main(){

    string str;
    getline(cin,str);

    string modifyStr=modify(str);

    if(check_palindrome(modifyStr))
    cout<<1;
    else
    cout<<0;

    return 0;
}