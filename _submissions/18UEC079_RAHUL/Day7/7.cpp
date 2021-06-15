/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
   ListNode* temp1=A,*temp2=B,*temp3;
     ListNode* head=new ListNode(-1);
     temp3=head;
   while(temp1!=NULL && temp2!=NULL){
       if(temp1->val>=temp2->val){
            ListNode* t=new ListNode(temp2->val);
         temp3->next=t;
         temp3=temp3->next;
         
         temp2=temp2->next;
       }
       else{
            ListNode* t=new ListNode(temp1->val);
         temp3->next=t;
         temp3=temp3->next;
         
         temp1=temp1->next;
       }
   }
    
    while(temp1!=NULL){
         ListNode* t=new ListNode(temp1->val);
         temp3->next=t;
         temp3=temp3->next;
         
         temp1=temp1->next;
    }
    
     while(temp2!=NULL){
         ListNode* t=new ListNode(temp2->val);
         temp3->next=t;
         temp3=temp3->next;
         
         temp2=temp2->next;
    }
    return head->next;
}
