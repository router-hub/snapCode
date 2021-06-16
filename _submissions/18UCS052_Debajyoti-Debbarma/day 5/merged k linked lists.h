/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A.size()==0){
        ListNode* a;
        return a;
    }
    
  ListNode* current;
  vector<int> allNodes;
  
  for(int i=0;i<A.size();i++){
      current=A[i];
      while(current!=NULL){
          int val=current->val;
          allNodes.push_back(val);
          current=current->next;
      }
  }
  
   sort(allNodes.begin(),allNodes.end());
  
  for(int i=0,j=0;i<A.size();i++){
      current=A[i];
      while(current!=NULL){
          current->val=allNodes[j];
          current=current->next;
          j++;
      }
  }
  ListNode* prevNode;
  for(int i=0,j=0;i<A.size();i++){
      current=A[i];
      prevNode->next=current;
      while(current!=NULL){
         
          prevNode=current;
          current=current->next;
          
      }
  }
  
  
  
  return A[0];
}
