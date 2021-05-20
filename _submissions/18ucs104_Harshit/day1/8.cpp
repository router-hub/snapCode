// Balanced parenthesis

int Solution::solve(string A) {
    
    stack<char>s;
    char x;
    for(int i=0;i<A.size();i++){
        if(A[i]=='('||A[i]=='{'||A[i]=='['){
            s.push(A[i]);
            continue;
        }
        
        if(s.empty())
        return 0;
        
        switch(A[i]){
            case '}':
                x=s.top();
                s.pop();
                if(x=='('||x=='[')
                return 0;
                break;
                
                    case ']':
                x=s.top();
                s.pop();
                if(x=='('||x=='{')
                return 0;
                break;
                
                    case ')':
                x=s.top();
                s.pop();
                if(x=='{'||x=='[')
                return 0;
            
                
                
        }
        
        
    }
    return s.empty();
}
