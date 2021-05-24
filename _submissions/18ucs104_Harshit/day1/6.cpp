#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B){
        int c=0;
        int k=B;
        for(int i=0;i<A.size();i++)
            m[A[i]]++;
        
        for(auto it=m.begin();it!=m.end();it++){
            int x=it->first;
        
        if(m.find(x+k)==m.end())
                continue;
            
        c+=(k==0)?m[x+k]>=2 :m[x+k]>=1;
        
        }

        if(c!=0)
        return 1;
        else
        return 0;

}

int main(){
    int n;
    cin>>n;

    vector<int>A(n);
    for(int i=0;i<n;i++)
    cin>>A[i];

    int diff;
    cin>>diff;

    cout<<solve(A,diff);
    return 0;


}