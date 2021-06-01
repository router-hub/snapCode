class ListNode {
  public int val;
  public ListNode next;

  ListNode(int x) {
    val = x;
    next = null;
  }
}

public class Solution {
  public ListNode insertionSortList(ListNode A) {
    if (A == null)
      return null;
    ListNode curr = A.next;
    ListNode root = A;
    root.next = null;
    while (curr != null) {
      ListNode temp = curr.next;
      root = insert(curr, root);
      curr = temp;
    }
    return root;
  }

  private ListNode insert(ListNode curr, ListNode root) {
    ListNode temp = root;
    if (root.val > curr.val) {
      root = curr;
      root.next = temp;
      return root;
    }
    while (temp.next != null && temp.next.val <= curr.val) {
      temp = temp.next;
    }
    ListNode nextNode = temp.next;
    temp.next = curr;
    curr.next = nextNode;
    return root;
  }
}
