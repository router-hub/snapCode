ListNode* merge(ListNode* a,ListNode* b)
 {
     ListNode* res=NULL;
     if(a==NULL)
     return b;
     else if(b==NULL)
     return a;
     if(a->val<=b->val) {
         res=a;
         res->next=merge(a->next,b);}
     else{
         res=b;
         res->next=merge(a,b->next);}
     return res;
 }
ListNode* Solution::sortList(ListNode* A) {
  if(A==NULL || A->next==NULL){
      return A;}
  ListNode* slow=A;
  ListNode* fast=A->next->next;
  while(fast && fast->next){
      fast=fast->next->next;
      slow=slow->next;}
  ListNode* right=sortList(slow->next);
  slow->next=NULL;
  ListNode* left=sortList(A);
  return merge(left,right);
}
