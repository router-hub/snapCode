module.exports = { 
 //param A : string
 //return an integer
    solve : function(A){
        
        
        
        if(A){
            
            
            let stack=new Array();
            A=A.split('');
            for(let i=0;i<A.length;i++){
                
                if(A[i]==='('){
                    stack.push('(');
                }
                if(A[i]===')'){
                    if(stack.length>=1)
                        {
                            stack.pop();
                            
                        }
                    else
                        {
                           return 0;
                        }
                        
                }
            }
            
            if(stack.length===0) return 1;
         
        }
        return 0;

    }
};
