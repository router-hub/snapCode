
class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

class sortList1 {
  public ListNode sortList(ListNode A) {
    if (A == null || A.next == null)
      return A;
    // split
    ListNode mid = getMid(A);
    ListNode second = mid.next;
    mid.next = null;
    // sort 2 halves
    ListNode left = sortList(A);
    ListNode right = sortList(second);
    // merge
    return mergeLists(left, right);
  }

  private ListNode getMid(ListNode head) {
    if (head == null || head.next == null)
      return head;
    if (head.next.next == null)
      return head;
    ListNode slow = head, fast = head;
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  private ListNode mergeLists(ListNode l1, ListNode l2) {
    ListNode root = new ListNode(-1);
    ListNode head = root;
    while (l1 != null && l2 != null) {
      if (l1.val < l2.val) {
        head.next = l1;
        head = head.next;
        l1 = l1.next;
      } else {
        head.next = l2;
        head = head.next;
        l2 = l2.next;
      }
    }
    while (l1 != null) {
      head.next = l1;
      head = head.next;
      l1 = l1.next;
    }
    while (l2 != null) {
      head.next = l2;
      head = head.next;
      l2 = l2.next;
    }
    return root.next;
  }
}
