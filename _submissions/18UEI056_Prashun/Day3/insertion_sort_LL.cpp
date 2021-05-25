/*Sort a linked list using insertion sort.
*/

//code

ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* temp=A;
    int count=0;
    while(temp!=NULL)
    { count++;
        temp=temp->next;
    }
    if(count<=0) return A;
    ListNode* curr=A;
    vector<int>ans;
    for(int i=0;i<count;i++)
    {
        ans.push_back(curr->val);
        curr=curr->next;
    }
    ListNode* final=A;
    sort(ans.begin(),ans.end());
    for(int i=0;i<count;i++)
    {
        final->val=ans[i];
        final=final->next;
    }
    return A;
}
