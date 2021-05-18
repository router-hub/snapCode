/*
Sort Binary Linked List : https://www.interviewbit.com/problems/sort-binary-linked-list/

Given a Linked List A consisting of N nodes.

The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.

You need to sort the linked list and return the new linked list.

NOTE:

Try to do it in constant space.

*/
// Definition for singly-linked list.
class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class Q7 {
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
