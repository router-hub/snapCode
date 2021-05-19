#include<bits/stdc++.h>
using namespace std;

// using & and >> operators

int numSet(int n){

    while(n!=0){
        count=n&1;
        n=n>>1;
    }

    return count;
}

// using built in function
int numSetBits(int A){

    int ans=__builtin_popcount(A);

    return ans;

}

int main(){

    int A;
    cin>>A;

    cout<<numSetBits(A);

    return 0;
}
