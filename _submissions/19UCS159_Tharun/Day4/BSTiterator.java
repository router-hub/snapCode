public class BSTiterator {

  public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
      val = x;
    }
  }

  TreeNode root;

  public BSTiterator(TreeNode root) {
    this.root = helper(root);
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

  /** @return whether we have a next smallest number */
  public boolean hasNext() {
    return root != null;
  }

  /** @return the next smallest number */
  public int next() {
    int res = root.val;
    root = root.right;
    return res;
  }

  /**
   * Your Solution will be called like this: Solution i = new Solution(root);
   * while (i.hasNext()) System.out.print(i.next());
   */

}
