
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

public class removeHalfNodes {
  public TreeNode solve(TreeNode A) {
    // leaf
    if (A.left == null && A.right == null) {
      return A;
    }
    if (A.left == null)
      return solve(A.right);
    if (A.right == null)
      return solve(A.left);

    A.left = solve(A.left);
    A.right = solve(A.right);
    return A;
  }
}
