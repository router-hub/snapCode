
#define mod 1000000007

int Solution::nchoc(int A, vector<int> &B) {
   
   
   //COMMENTED FOR TIME LIMIT EXCEEDED 
//     long long count=0;
//     long long mx;
    
//     if(B.size()==0){
//         return 0;
//     }
    
//      sort(B.begin(),B.end());
//      reverse(B.begin(),B.end());
    
//     mx=(long long)B[0];
    
//     for(int i=A;i>0;i--){
        
//         count+=mx;
//         B[0]=floor(B[0]/2);
//         sort(B.begin(),B.end());
//         reverse(B.begin(),B.end());
//         if(mx!=B[0]){
//             mx=(long long)B[0];
//         }
  
//     }
    
//   return count%mod;


int N = B.size();
	int K = A;
	long long int ans = 0;
	priority_queue<int> heap(B.begin(),B.end());
	while(K--){
		long long int max_elem = heap.top();
		ans += max_elem;
		ans = ans % mod;
		heap.pop();
		heap.push((int)(max_elem/2));
	}   
	return ans;
    
}
