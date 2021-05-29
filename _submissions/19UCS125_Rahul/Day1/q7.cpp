/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* head = A;
    ListNode *tail, *temp;
    temp = A;
    int n = 0;
    while(temp != NULL) {
        tail = temp;
        temp = temp->next;
        n++;
    }
    //cout<<n<<endl;
    temp = head;
    ListNode *prev = head;
    for(int i=0; i<n && temp->next != NULL; ++i) {
        if(temp->val == 1) {
            if(temp == head) {
                head = (temp->next != NULL) ? temp->next : head;
                prev = head;
                tail->next = temp;
                temp->next = NULL;
                tail = tail->next;
                temp = head;
            }
            else {
                prev->next = temp->next;
                temp->next = NULL;
                tail->next = temp;
                tail = tail->next;
                temp = prev->next;
            }
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }
    
    return head;
}
