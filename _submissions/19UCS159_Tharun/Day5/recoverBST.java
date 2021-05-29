import java.util.*;

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
    left = null;
    right = null;
  }
}

public class recoverBST {
  // O(n)
  public ArrayList<Integer> recoverTree(TreeNode A) {
    A = helper(A);
    ArrayList<Integer> list = new ArrayList<>();
    TreeNode first = null, second = null, prev = A;
    TreeNode curr = A.right;
    while (curr != null) {
      if (curr.val < prev.val) {
        if (first == null) {
          first = prev;
        }
        second = curr;
      }
      prev = curr;
      curr = curr.right;
    }
    list.add(Math.min(first.val, second.val));
    list.add(Math.max(first.val, second.val));
    return list;
  }

  private TreeNode helper(TreeNode root) {
    if (root == null)
      return null;
    TreeNode res = root;
    if (root.left != null) {
      TreeNode left = helper(root.left);
      res = left;
      while (left.right != null) {
        left = left.right;
      }
      root.left = null;
      left.right = root;
      res.right = helper(res.right);
      return res;
    } else {
      res.right = helper(root.right);
    }
    return res;
  }
}
