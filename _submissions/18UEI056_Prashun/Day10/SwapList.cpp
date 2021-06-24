/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode*swapNode(ListNode*next1,ListNode*next2)
 {next1->next=next2->next;
 next2->next=next1;
 return next2;
 }
 
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL) return NULL;
    ListNode*start=new ListNode(0);
    start->next=A;
    ListNode*curr=start;
    // ListNode*temp=A;
while(curr->next!=NULL && curr->next->next!=NULL){
// {  
// swap(curr->val,curr->next->val);
curr->next=swapNode(curr->next,curr->next->next);
curr=curr->next->next;
}
    return start->next;
}
