module.exports = { 
 //param A : integer
 //return a array of integers
 
  findPrime:function(A){
     let a=new Array();
     let count=0;
     
     for(let i=2;i<A;i++){
         for(let j=2;j<i;j++ ){
             if(i%j===0){
                 count++;
             }
         }
         if(count===0){
             a.push(i);
         }
         count=0;
     }
     return a;
 },
 
    primesum : function(A){
        
        if(A){
            const primes=this.findPrime(A);
            for(let i=0;i<primes.length;i++){
                for(let j=i;j<primes.length;j++){
                   
                        if((primes[i]+primes[j])===A){
                            return [primes[i],primes[j]];
                        }
                    
                }
            }
            
            
        }

    }
};
