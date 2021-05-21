import java.util.*;

class combinationSum1 {
  public ArrayList<ArrayList<Integer>> combinationSum(ArrayList<Integer> A, int B) {
    ArrayList<ArrayList<Integer>> res = new ArrayList<>();
    ArrayList<Integer> curr = new ArrayList<>();
    Collections.sort(A);
    solve(A, 0, 0, B, curr, res);
    return res;
  }

  private void solve(ArrayList<Integer> A, int i, int currSum, int B, ArrayList<Integer> curr,
      ArrayList<ArrayList<Integer>> res) {
    if (i == A.size())
      return;
    if (currSum == B) {
      res.add(new ArrayList<>(curr));
      return;
    }
    if (currSum < B) {
      if (i == 0 || A.get(i) != A.get(i - 1)) {
        curr.add(A.get(i));
        solve(A, i, currSum + A.get(i), B, curr, res);
        curr.remove(curr.size() - 1);
      }
      solve(A, i + 1, currSum, B, curr, res);
    }

  }
}
