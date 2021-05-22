// PARTIALLY CORRECT

module.exports = { 
 //param A : array of array of integers
 //return an integer
    findMedian : function(A){
        if(A){
            if(A.length===1)
            {
                return A[0][(A[0].length-1)/2];
            }
           
           for(let i=0;i<A.length;i++){
               for(let j=i;j<A[0].length;j++){
                   for(let k=i+1;k<A.length;k++){
                       for(let h=0;h<A[0].length;h++){
                           if(A[i][j]>A[k][h]){
                               let temp=A[i][j];
                               A[i][j]=A[k][h];
                               A[k][h]=temp;
                           }
                       }
                   }
                   
               }
               A[i].sort()
           }
           
        }
        
        return A[(A.length-1)/2][(A[0].length-1)/2];
        

    }
};