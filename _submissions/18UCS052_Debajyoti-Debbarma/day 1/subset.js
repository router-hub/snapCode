module.exports = { 
 //param A : array of integers
 //return a array of array of integers
    subsets : function(A){
        
        
         var result = [];
	    A.sort(function(a,b) {return a-b;});
	    
        var recurse = function(currentIndex, soFar) {
            result.push(soFar.slice());
            
            for (var i = currentIndex; i < A.length; i++) {
                soFar.push(A[i]);
                recurse(i+1, soFar);
                soFar.pop();
            }
        };
        recurse(0, []);
        return result;
	}

// MY TRY // WRONG ANSWER

 // let result=new Array();
        
        // result.push([]);
        
        // if(A){
        //     A=A.sort((a,b)=>a-b);
            
        //     let sub=new Array();
            
        //     for(let i=0;i<A.length;i++){
                
        //         for(let j=i;j<A.length;j++){
        //             sub.push(A[j]);
        //             result.push([...sub]);
        //         }
        //  let n=[...sub];
        //         for(let k=1;k<sub.length;k++){
        //             sub.splice(k,1);
        //             result.push([...sub]);
        //         }
                
        //         for(let k=1,m=n.length-1;k>=m;k++,m--){
        //             n.splice(k,1);
        //             n.splice(m,1);
        //             result.push([...n]);
        //         }
        //         sub=new Array();
               
        //     }
        // }
        
        // return result;
    
};
