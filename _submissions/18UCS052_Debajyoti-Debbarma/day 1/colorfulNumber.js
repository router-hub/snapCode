module.exports = { 
 //param A : integer
 //return an integer
 mult:function(B){
     let mul=1;
     for(let i=0;i<B.length;i++){
         mul=mul*Number(B[i]);
     }
     return mul;
 },
 
 
    colorful : function(A){
        
                var result = [];
                A=A.toString().split('');
                if(A.length===1) return 1;
                let store=new Array();
        	 
        	   
        	   let sub=new Array();
            
            for(let i=0;i<A.length;i++){
                
                for(let j=i;j<A.length;j++){
                    sub.push(A[j]);
                    result.push([...sub]);
                }
                sub=[];
            }
        	   
                for(let i=0;i<result.length;i++){
                    store[i]=this.mult(result[i]);
                }
                if(store.length===Array.from(new Set(store)).length){
                    return 1;
                }
                return 0;
                
    }
};
