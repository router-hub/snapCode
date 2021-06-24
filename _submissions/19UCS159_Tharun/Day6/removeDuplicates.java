public class removeDuplicates {
  public ListNode deleteDuplicates(ListNode A) {
    if (A == null)
      return null;
    ListNode prev = null, curr = A;
    while (curr != null) {
      boolean dup = false;
      while (curr.next != null && curr.val == curr.next.val) {
        dup = true;
        curr = curr.next;
      }
      ;
      if (dup) {
        if (prev == null)
          A = curr.next;
        else
          prev.next = curr.next;
        curr = curr.next;
      } else {
        prev = curr;
        curr = curr.next;
      }
    }
    return A;
  }
}
