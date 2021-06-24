
class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class mergeTwoSortedLists {
  public ListNode mergeTwoLists(ListNode A, ListNode B) {
    ListNode head = null, curr = null, first = A, second = B;
    while (first != null || second != null) {
      int x = (first != null) ? first.val : Integer.MAX_VALUE;
      int y = (second != null) ? second.val : Integer.MAX_VALUE;
      if (x < y) {
        if (head == null) {
          head = first;
          curr = first;
        } else {
          curr.next = first;
          curr = curr.next;
        }
        first = first.next;
      } else {
        if (head == null) {
          head = second;
          curr = second;
        } else {
          curr.next = second;
          curr = curr.next;
        }
        second = second.next;
      }
    }

    return head;
  }
}
