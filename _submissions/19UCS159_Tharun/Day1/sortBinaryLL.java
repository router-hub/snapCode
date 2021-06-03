/**
 * Definition for singly-linked list. class ListNode { public int val; public
 * ListNode next; ListNode(int x) { val = x; next = null; } }
 */
public class Solution {
  public ListNode solve(ListNode A) {
    int zeroes = 0;
    ListNode curr = A;
    while (curr != null) {
      if (curr.val == 0)
        zeroes++;
      curr = curr.next;
    }
    curr = A;
    while (curr != null) {
      if (zeroes > 0) {
        curr.val = 0;
        zeroes--;
      } else {
        curr.val = 1;
      }
      curr = curr.next;
    }
    return A;
  }
}
