stack<int>s1;//for storing actual stack elements
stack<int>s2;//for storing minimum of elements
MinStack::MinStack() {
    while(!s1.empty())
    {
        s1.pop();
    }
    while(!s2.empty())
    {
        s2.pop();
    }
   
}

void MinStack::push(int x) {
    s1.push(x);
    if(s2.empty())
    {
    s2.push(x);
    }
    else
{
    s2.push(min(x,s2.top()));
}
}

void MinStack::pop() {
    if(!s1.empty())
    {
        s1.pop();
    s2.pop();
    }
}

int MinStack::top() {
    if(s1.empty())
    {
        return -1;
    }
    return s1.top();
}

int MinStack::getMin() {
    if(s2.empty())
    {
        return -1;
    }
    return s2.top();
}

