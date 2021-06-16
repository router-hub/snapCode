vector<int> Solution::maxone(vector<int> &A, int B) {
    
      vector<int>ans;  
    int ws=0;//window start
int we=0;//window end
int zc=0; //zero count
int w=0;//width of the window
 int initial,end;
 int n = A.size();
  
 for(int we =0; we<n; we++){
     
     if(A[we]==0){
         zc++;
     }
     
     while(zc>B){
         if(A[ws]==0){
         zc--;
        }
        ws++;
    }
    
    if(we-ws+1>w){
        
        w =we-ws+1;
        initial=ws;
        end=we;
    }
}
for(int i=initial;i<=end;i++)
ans.push_back(i);
return ans;
}
