#include<bits/stdc++.h>
using namespace std;



// Brute force

int findMedian(vector<vector<int> > &A){

    vector<int>store;                          // 2D to 1D
    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            store.push_back(A[i][j]);
        }
    }
    
    // sorting
    sort(store.begin(),store.end());

    int n=store.size();
    int ans=0;
    if(n%2==0){
        
        ans=(store[n/2]+store[(n/2)-1])/2;
    }
    
    else
    ans=store[n/2];
    
    
    return ans;
}

int main(){

    int row,col;
    cin>>row>>col;

    vector<int>matrix(row,vector<int>(col,0));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<findMedian(matrix);
    return 0;

}