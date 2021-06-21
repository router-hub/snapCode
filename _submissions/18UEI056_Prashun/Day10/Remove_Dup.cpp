ListNode* Solution::deleteDuplicates(ListNode* A) {
auto curr = A;
while(curr->next !=NULL){
if(curr->val == curr->next->val){
auto temp = curr->next;
curr->next = curr->next->next;
delete temp;
}else{
curr = curr->next;
}
}
  
  
return A;
}
