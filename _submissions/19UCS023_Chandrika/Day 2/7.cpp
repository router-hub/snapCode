ListNode* Solution::partition(ListNode* A, int B) {
ListNode* less=new ListNode(0);
ListNode* greater=new ListNode(0);

ListNode* temp1=less;
ListNode* temp2=greater;
while(A)
{
    if(A->val<B)
    {
        temp1->next=A;
        temp1=temp1->next;
    }
    else if(A->val>=B)
    {
        temp2->next=A;
        temp2=temp2->next;
    }
    A=A->next;
    
}
temp1->next=greater->next;
temp2->next=NULL;
return less->next;
}
