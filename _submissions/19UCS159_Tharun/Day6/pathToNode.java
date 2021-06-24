import java.util.*;

public class pathToNode {

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

  public int[] solve(TreeNode A, int B) {
    HashMap<TreeNode, TreeNode> parent = new HashMap<>();
    TreeNode targetNode = dfs(A, A, B, parent);
    ArrayList<Integer> list = new ArrayList<>();
    TreeNode curr = targetNode;
    while (parent.get(curr) != curr) {
      list.add(curr.val);
      curr = parent.get(curr);
    }
    list.add(A.val);
    int[] res = new int[list.size()];
    for (int i = 0; i < list.size(); i++) {
      res[i] = list.get(list.size() - i - 1);
    }
    return res;
  }

  private TreeNode dfs(TreeNode curr, TreeNode par, int target, HashMap<TreeNode, TreeNode> parent) {
    parent.put(curr, par);
    if (curr.val == target)
      return curr;
    if (curr.left != null) {
      TreeNode left = dfs(curr.left, curr, target, parent);
      if (left != null) {
        return left;
      }
    }
    if (curr.right != null) {
      TreeNode right = dfs(curr.right, curr, target, parent);
      if (right != null) {
        return right;
      }
    }
    return null;
  }

}
