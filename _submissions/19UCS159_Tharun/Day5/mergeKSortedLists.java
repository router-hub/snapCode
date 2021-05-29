import java.util.*;

class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class mergeKSortedLists {
  public ListNode mergeKLists(ArrayList<ListNode> a) {
    PriorityQueue<ListNode> pq = new PriorityQueue<>((x, y) -> x.val - y.val);
    for (ListNode node : a)
      pq.add(node);

    ListNode head = null, temp = null;
    while (!pq.isEmpty()) {
      ListNode curr = pq.poll();
      if (curr.next != null)
        pq.add(curr.next);
      curr.next = null;
      if (temp == null) {
        head = curr;
        temp = head;
      } else {
        temp.next = curr;
        temp = temp.next;
      }
    }
    return head;
  }
}
