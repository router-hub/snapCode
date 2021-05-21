/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode* head=A;
    
     ListNode* sm_head=NULL;
        ListNode* sm_prev=NULL;
        ListNode* gr_head=NULL;
        ListNode* gr_prev=NULL;
        
        for(ListNode* i=head;i!=NULL;i=i->next){
            
            int k=i->val;
            if(k<B){
                
                if(sm_head==NULL){
                    sm_head=i;
                    sm_prev=i;
                }
                else{
                    sm_prev->next=i;
                    sm_prev=sm_prev->next;
                }
                
                
            }
            else{
                
                if(gr_head==NULL){
                    gr_head=i;
                    gr_prev=i;
                }
                else{
                    gr_prev->next=i;
                    gr_prev=gr_prev->next;
                }
                
            }
            
        }
        
      
        
        if(gr_head==NULL)
            return sm_head;
        if(sm_head==NULL)
            return gr_head;
        if(sm_head!=NULL && gr_head!=NULL){
            sm_prev->next=gr_head;
            gr_prev->next=NULL;
        }
        
        return sm_head;
}
