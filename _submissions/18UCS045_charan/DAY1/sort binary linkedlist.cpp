ListNode* Solution::solve(ListNode* A) {
    ListNode* curr=A;
    int n=0;
    int n1=0;
    while(curr!=NULL)
    {
        if(curr->val==0)
        {
            n++;
        }
        else
        {
            n1++;
        }
        curr=curr->next;
    }
    curr=A;
    for(int i=1;i<=n+n1;i++)
    {
        if(i<=n)
        {
            curr->val=0;
        }
        else
        {
            curr->val=1;
        }
        curr=curr->next;
    }
    return A;
    
}
