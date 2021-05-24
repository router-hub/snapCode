// Definition for singly-linked list.
//    function Node(data){
//      this.data = data
//      this.next = null
//    }

module.exports = { 
 //param A : head node of linked list
 //return the head node in the linked list
    solve : function(A){
        
        current=A;
        let linkedArray=new Array();
        
        while(current.next!==null){
            linkedArray.push(current.data);
            current=current.next;
        }
        linkedArray.push(current.data);
        
        if(linkedArray.join('')==linkedArray.sort().join('')){
            return A;
        }
        
        linkedArray=linkedArray.sort();
        
        current=A;
        
        linkedArray.forEach(el=>{
            current.data=el;
            current=current.next;
        })
        
      return A;
       
    }
};
