ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    
/*Using vectors*/
 vector<int>v;
 for(auto it:A)
 {
     while(it)
     {
        v.push_back(it->val);
        it=it->next;
     }
 }
 sort(v.begin(),v.end());
 ListNode* temp=new ListNode(0);
 ListNode* p=temp;
 for(auto x:v)
 {
     p->next=new ListNode(x);
     p=p->next;
 }
 return temp->next;
}
