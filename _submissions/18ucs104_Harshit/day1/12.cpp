// Valid Bst from preorder    
int Solution::solve(vector<int> &A) {
    
 stack<int>s;
     int n=A.size();
     
        int root=INT_MIN;
        int k=1;
        for(int i=0;i<n;i++){
            
            if(root>A[i]){
                k=0;
                break;
            }
            while(!s.empty() && s.top()<A[i]){
                root=s.top();
                s.pop();
            }
            s.push(A[i]);
            
        }
        return k;
        
}

           
        