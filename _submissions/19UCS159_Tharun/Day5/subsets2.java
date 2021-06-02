import java.util.*;

public class subsets2 {
  public ArrayList<ArrayList<Integer>> subsetsWithDup(ArrayList<Integer> A) {
    LinkedHashSet<ArrayList<Integer>> res = new LinkedHashSet<>();
    Collections.sort(A);
    solve(A, 0, new ArrayList<>(), res);
    return new ArrayList<>(res);
  }

  private void solve(ArrayList<Integer> A, int i, ArrayList<Integer> curr, LinkedHashSet<ArrayList<Integer>> res) {

    res.add(new ArrayList<>(curr));

    for (int j = i; j < A.size(); j++) {
      curr.add(A.get(j));
      solve(A, j + 1, curr, res);
      curr.remove(curr.size() - 1);
      solve(A, j + 1, curr, res);
    }

  }
}
