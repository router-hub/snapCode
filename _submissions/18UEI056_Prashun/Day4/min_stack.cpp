int minElm=0;
stack<int>s;
MinStack::MinStack() {
    while(!s.empty())
    s.pop();
}

void MinStack::push(int x) {
if(s.empty())
 {s.push(x);
     minElm=x;
 }
 else{
      if(minElm<=x)
      s.push(x);
      else if(minElm>x)
      { s.push(2*x-minElm);
      minElm=x;
      }
 }
}

void MinStack::pop() {
    if(!s.empty())
    { if(minElm <=s.top())
        s.pop();
        else if(minElm>s.top())
        { minElm=2*minElm-s.top();
            s.pop();
        }
    }
    return ;
}

int MinStack::top() {
    if(!s.empty())
    { if(s.top()>=minElm)
     return s.top();
     else if(s.top()<minElm)
     return minElm;
    }
    return -1;
}

int MinStack::getMin() {
    if(s.size()==0)
    return -1;
    
     return minElm;
}

