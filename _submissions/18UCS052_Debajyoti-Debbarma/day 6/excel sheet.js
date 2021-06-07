let AtoZ=new Map();
    for(let i=1,j=65;i<=26;i++,j++){
        AtoZ.set(String.fromCharCode(j),i);
    }
    
    if(s){

        mul=26*AtoZ.get(s[0]);
        prev=1;
        for(let i=0;i<s.length-1;i++){
            mul=prev*mul;
   prev=26;      mul=mul+AtoZ.get(s[i+1]);
    
    
        }
        if(s.length===1)return AtoZ.get(s[0]);
        return  mul;
        
    }