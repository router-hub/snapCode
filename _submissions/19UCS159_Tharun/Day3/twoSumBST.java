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

public class twoSumBST {
  public int t2Sum(TreeNode A, int B) {
    HashSet<Integer> set = new HashSet<>();
    return find(A, set, B) ? 1 : 0;
  }

  private boolean find(TreeNode A, HashSet<Integer> set, int B) {
    if (A == null)
      return false;
    if (set.contains(B - A.val))
      return true;
    set.add(A.val);
    return find(A.left, set, B) || find(A.right, set, B);
  }

}
