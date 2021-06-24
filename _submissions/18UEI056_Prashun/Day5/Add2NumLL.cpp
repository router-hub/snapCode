ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
ListNode* n1 = A;
    ListNode* n2 = B;
    
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int carry = 0;
    while(n1 || n2 || carry){
        int value = carry;
        if(n1) value += n1->val;
        if(n2) value += n2->val;
        
        carry = value/10;
        if(!tail){
            tail = new ListNode(value%10);
            head = tail;
        }
        else{
            tail->next = new ListNode(value%10);
            tail = tail->next;
        }
        
        if(n1) n1 = n1->next;
        if(n2) n2 = n2->next;
    }
    
    return head;}
