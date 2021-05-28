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

public class LevelOrder {
  public ArrayList<ArrayList<Integer>> levelOrder(TreeNode A) {
    ArrayList<ArrayList<Integer>> res = new ArrayList<>();
    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(A);
    while (!queue.isEmpty()) {
      int size = queue.size();
      ArrayList<Integer> curr = new ArrayList<Integer>();
      while (size-- > 0) {
        TreeNode node = queue.remove();
        curr.add(node.val);
        if (node.left != null)
          queue.add(node.left);
        if (node.right != null)
          queue.add(node.right);
      }
      res.add(curr);
    }
    return res;
  }
}
