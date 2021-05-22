module.exports = { 
 //param A : string
 //return an integer
    isPalindrome : function(A){
        if(A){
            A=A.toLowerCase();
            A=A.split('');
            for(let i=0;i<A.length;i++){
                if(!((A[i]>='A'&&A[i]<='Z')||(A[i]>='a'&&A[i]<='z')||(A[i]>='0'&&A[i]<='9'))){
                    A.splice(i,1);
                }
            }
            A=A.join('').split(' ').join('');
            if(A===A.split('').reverse().join('')){
                return 1;
            }
        }
        return 0;

    }
};
