#include<bits/stdc++.h>
using namespace std;

vector<int>primeSum(int n){

// Sieve of erastothenes
    vector<bool>prime(n,false);

        for(int i=2;i*i<=n;i++){
            if(prime[i]==false){
                for(int j=i*i;j<=n;j+=i)
                    prime[j]=true;
            }

        }

        vector<int>res;  // output

        for(int i=2;i<=n/2;i++){
            if(!prime[i] && !prime[n-i]){
                res.push_back(i);
                res.push_back(n-i);
                break;
            }
        }
    return res;



}



int main(){

    int A;
    cin>>A;

    vector<int>psum=primeSum(A);
    cout<<psum[0]<<" "<<psum[1];
    return 0;
}