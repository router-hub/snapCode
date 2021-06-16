/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
     ListNode* temp=A,*prev=NULL;
    ListNode* head=new ListNode(-1);
    prev=head;
    
     while(temp){
         if(temp->val!=prev->val)
         {
              ListNode* t=new ListNode(temp->val);
            prev->next=t;
            prev=prev->next;
            
         }
          temp=temp->next;
         
     }
     return head->next;      
}
