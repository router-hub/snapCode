/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* current=A;
    
    while(current!=NULL){
        
        ListNode* nextNode=current->next;
        
        while(nextNode!=NULL){
            
            if(current->val==nextNode->val){
                nextNode=nextNode->next;
            }
            else{
                current->next=nextNode;
                break;
            }
            
        }
        if(nextNode==NULL) current->next=NULL;
        current=current->next;
    }
    
    return A;
    
    
}
