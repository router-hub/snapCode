/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct Compare
{
    bool operator()(ListNode* const& a, ListNode* const& b)
    {
        return a->val > b->val;
    }
};
    
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 if (A.empty())
        return NULL;
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;
    priority_queue<ListNode*, vector<ListNode*>, Compare> PQ;
    
    for (auto i = 0; i<A.size(); ++i)
    {
       // if (A[i])
            PQ.emplace(A[i]);
    }
    
    while (!PQ.empty())
    {
        ListNode* n= PQ.top();
        tail->next =n;
        PQ.pop();
        tail = tail->next;
        if (n->next)
            PQ.emplace(n->next);
    }
    return dummy->next; 
    
}
