public class kthSmallestInBST {
  int count = 0;

  public int kthsmallest(TreeNode A, int B) {
    return inorder(A, B);
  }

  private int inorder(TreeNode A, int B) {
    if (A == null)
      return -1;
    int left = inorder(A.left, B);
    if (left != -1)
      return left;
    count++;
    if (count == B)
      return A.val;
    int right = inorder(A.right, B);
    return right;
  }
}