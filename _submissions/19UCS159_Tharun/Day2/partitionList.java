
class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class partitionList {
  public ListNode partition(ListNode A, int B) {
    ListNode head = null, curr = null, temp = A;
    while (temp != null) {
      if (temp.val < B) {
        if (head == null) {
          head = new ListNode(temp.val);
          curr = head;
        } else {
          curr.next = new ListNode(temp.val);
          curr = curr.next;
        }
      }
      temp = temp.next;
    }
    temp = A;
    while (temp != null) {
      if (temp.val >= B) {
        if (head == null) {
          head = new ListNode(temp.val);
          curr = head;
        } else {
          curr.next = new ListNode(temp.val);
          curr = curr.next;
        }
      }
      temp = temp.next;
    }
    return head;
  }
}
