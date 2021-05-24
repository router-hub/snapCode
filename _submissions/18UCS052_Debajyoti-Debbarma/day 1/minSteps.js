module.exports = { 
 //param A : array of integers
 //param B : array of integers
 //return an integer
    coverPoints : function(A, B){
         if (A.length == 0 || B.length == 0) {
            return 0;
        }
        
        let x = A[0];
        let y = B[0];
        let distance = 0;
        
        for (let i = 1; i < A.length; i++) {
            let newX = A[i];
            let newY = B[i];
            let max = Math.max(Math.abs(newX - x), Math.abs(newY - y));
            distance += max;
            x = newX;
            y = newY;
        }
        
        return distance;

    }
};
