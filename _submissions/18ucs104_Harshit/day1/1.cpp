#include<bits/stdc++.h>
using namespace std;

// Min Steps in Infinite Grid

int minSteps(vector<int> &A, vector<int> &B){
    int ans=0;
    for(int i=1;i<A.size();i++){
        int x=abs(A[i-1]-A[i]);
        int y=abs(B[i-1]-B[i]);
        ans+=max(x,y);


    }

    return ans;

}

// Driver code
int main(){
  
    // no of co-ordinates
    int n; 
    cin>>n;

    // X in A and Y in B => (X,Y)
    vector<int>A(n);
    vector<int>B(n);

    for(int i=0;i<n;i++)
        cin>>A[i]

    for(int i=0;i<n;i++)
        cin>>B[i]

    cout<<minSteps(A,B);

    return 0;




}