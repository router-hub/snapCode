
class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class palindromeList {
  public int lPalin(ListNode A) {
    ListNode mid = findMid(A);
    ListNode second = reverse(mid.next);
    mid.next = null;
    return compareLists(A, second);
  }

  private ListNode findMid(ListNode head) {
    ListNode slow = head, fast = head;
    while (fast.next != null && fast.next.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  private ListNode reverse(ListNode head) {
    ListNode prev = null, curr = head;
    while (curr != null) {
      ListNode nextNode = curr.next;
      curr.next = prev;
      prev = curr;
      curr = nextNode;
    }
    return prev;
  }

  private int compareLists(ListNode h1, ListNode h2) {
    ListNode l1 = h1, l2 = h2;
    while (l1 != null && l2 != null) {
      if (l1.val != l2.val)
        return 0;
      l1 = l1.next;
      l2 = l2.next;
    }
    return 1;
  }
}
