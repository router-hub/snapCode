ListNode* Solution::insertionSortList(ListNode* A) 
{
    ListNode* a=A;
    ListNode* b=A;
    
    for(a=a;a;a=a->next)
    {
        for(b=a->next;b;b=b->next )
        {
            if(a->val >= b->val )
            {
                int temp = a->val;
                a->val = b->val;
                b->val = temp;
            }
        }
    }
    return A;
}