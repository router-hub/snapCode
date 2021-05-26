module.exports = { 
 //param A : array of integers
 //param B : integer
 //return an integer
    solve : function(A, B){
        
      
        A=A.sort();
        A=Array.from(new Set(A));
        
        for(let i=0;i<A.length-1;i++){
            for(let j=i+1;j<A.length;j++){
                if(Math.abs(A[i]-A[j])===B ||A[i]-A[j]===B ||A[i]-A[j]===-B){
                    return 1;
                }
            }
        }
        return 0;
        

    }
};
