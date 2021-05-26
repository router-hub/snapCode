ListNode* Solution::solve(ListNode* A) {
    int zero = 0,one = 0;
    ListNode* temp = A;
    while(temp!= NULL){
        if(temp->val==0) zero++;
        else
        one++;
        temp = temp->next;
    }
    
    temp=A;
    while(zero!=0){
        temp->val=0;
        temp= temp->next;
        zero--;
    }
    while(one!=0){
        temp->val=1;
        temp= temp->next;
        one--;
    }
    return A;
    
}