/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* ptr) {
    int a=0,b=0;
    ListNode *temp = ptr;
    while(temp){
        if(temp->val==0) a++; else b++;
        
        temp = temp->next;
    }
    
    temp = ptr;
    while(a){
        temp->val = 0; temp = temp->next; a--;
    }
     while(b){
        temp->val = 1; temp = temp->next; b--;
    }
    
    return ptr;
}
