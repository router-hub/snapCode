module.exports = { 
    //param A : integer
    //return an integer
    numSetBits : function(A){
        let count=0;
        
        if(A){
            let currentNum=A;
            while(currentNum!==0){
                if(currentNum%2===1){
                    count++;
                }
                currentNum=Math.floor(currentNum/2);
                
            }
            
        }
        return count;
                
    }
};