import java.util.*;

public class combinations {
  public ArrayList<ArrayList<Integer>> combine(int A, int B) {
    ArrayList<ArrayList<Integer>> res = new ArrayList<>();
    solve(1, A, B, new ArrayList<>(), res);
    return res;
  }

  private void solve(int i, int A, int B, ArrayList<Integer> curr, ArrayList<ArrayList<Integer>> res) {
    if (i > A) {
      if (curr.size() == B)
        res.add(new ArrayList<>(curr));
      return;
    }
    curr.add(i);
    solve(i + 1, A, B, curr, res);
    curr.remove(curr.size() - 1);
    solve(i + 1, A, B, curr, res);
  }

}
