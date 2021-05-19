/*Given a Linked List A consisting of N nodes.

The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.

You need to sort the linked list and return the new linked list.
*/
//code
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* temp=A;
    ListNode* curr=A;
    int count1=0,count0=0;
    while(curr!=NULL)
    {if(curr->val==0)
    count0++;
    else
    {count1++;}
        curr=curr->next;
    }
    while(temp!=NULL)
    { if(count0 !=0)
    {
        temp->val=0;
        count0--;
    }
    else
    {temp->val=1;
    count1--;
    }
        temp=temp->next;
    }
    //A=curr;
    return A;
    
}
