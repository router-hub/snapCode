/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    
    vector<int> allValues;
    vector<int> lessThan;
    vector<int> greater;
    
    ListNode* current=A;
    
    while(current->next!=NULL){
        allValues.push_back(current->val);
        current=current->next;
    }
    allValues.push_back(current->val);
    
    for(int i=0;i<allValues.size();i++){
        
        if(allValues[i]<B){
            lessThan.push_back(allValues[i]);
        }
        if(allValues[i]>=B){
            greater.push_back(allValues[i]);
        }
    }
    allValues.clear();
    for(int i=0;i<lessThan.size();i++){
        
        allValues.push_back(lessThan[i]);
    }
    for(int i=0;i<greater.size();i++){
        
        allValues.push_back(greater[i]);
    }
    current=A;
    for(int i=0;i<allValues.size();i++){
       current->val=allValues[i];
       current=current->next;
    }
    
    return A;
    
}
