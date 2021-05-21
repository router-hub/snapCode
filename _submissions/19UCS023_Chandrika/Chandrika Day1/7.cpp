ListNode* Solution::solve(ListNode* A) {
    ListNode* temp=A;
    int zero_count=0,one_count=0;
    /*Count the No. of zeroes and ones*/
    while(temp)
    {
        if(temp->val==0)
        zero_count++;
        else
        one_count++;
        temp=temp->next;
    }
    temp=A;
    /*place 0s for 'zero_count' times*/
    /*place 1s for 'one_count' times*/
    while(zero_count--)
    {
        temp->val=0;
        temp=temp->next;
    }
    while(one_count--)
    {
        temp->val=1;
        temp=temp->next;
    }
    return A;
    
}
