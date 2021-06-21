  
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode*temp1=new ListNode(0);
      ListNode*temp2=new ListNode(0);
    ListNode*start1=temp1,*start2=temp2;
while(A)
{ if(A->val<B)
{ start1->next=A;
    A=A->next;
    start1=start1->next;
}
else
{ start2->next=A;
    A=A->next;
    start2=start2->next;
}
}
start1->next=temp2->next;
start2->next=NULL;
return temp1->next;
    
}
