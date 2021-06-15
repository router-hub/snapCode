vector<int> newStack;
vector<int> mins;

MinStack::MinStack() {
   while(newStack.size()!=0){
       newStack.pop_back();
   }
   while(mins.size()!=0){
       mins.pop_back();
   }
}

void MinStack::push(int x) {
    newStack.push_back(x);
    if(mins.size()==0){
        mins.push_back(x);
    }else{
        int k=mins.size()-1;
        if(mins[k]>x){
            mins.push_back(x);
        }
    }
}

void MinStack::pop() {
    if(newStack.size()==0) return ;
    int k=newStack.size()-1;
    int x=newStack[k];
    newStack.pop_back();
    int m=mins.size()-1;
    if(mins[m]==x){
        mins.pop_back();
    } 
}

int MinStack::top() {
    
    if(newStack.size()==0) return -1;
    int i=newStack.size()-1;
    return newStack[i];
    
}

int MinStack::getMin() {
   if(newStack.size()==0) return -1;
   int k=mins.size()-1;
   return mins[k];
    
}

