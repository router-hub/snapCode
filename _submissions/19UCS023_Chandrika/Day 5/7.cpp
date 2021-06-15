int Solution::lPalin(ListNode* A) {
    ListNode* temp=A;
    stack<int>st;
    while(temp!=NULL)
    {
        st.push(temp->val);
        temp=temp->next;
    }
    while(A!=NULL)
    {
        int x=st.top();
        st.pop();
        if(A->val!=x)
        {
            return 0;
        }
        A=A->next;
    }
    return 1;
    
}
