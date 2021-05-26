import java.util.*;

public class combinationSum2 {
  public ArrayList<ArrayList<Integer>> combinationSum(ArrayList<Integer> a, int b) {
    Collections.sort(a);
    ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
    HashSet<ArrayList<Integer>> res = new HashSet<>();
    solve(0, a, b, new ArrayList<>(), 0, res);
    for (ArrayList<Integer> set : res)
      ans.add(new ArrayList<>(set));
    return ans;
  }

  private void solve(int i, ArrayList<Integer> a, int b, ArrayList<Integer> curr, int sum,
      HashSet<ArrayList<Integer>> res) {
    if (sum == b) {
      res.add(new ArrayList<>(curr));
      return;
    }
    if (i == a.size() || sum > b)
      return;
    solve(i + 1, a, b, curr, sum, res);
    curr.add(a.get(i));
    solve(i + 1, a, b, curr, sum + a.get(i), res);
    curr.remove(curr.size() - 1);
  }
}
